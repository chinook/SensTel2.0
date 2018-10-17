/*
 * main.c
 *
 *  Created on: Mar 31, 2018
 *      Author: Jerome Pare-Lepine
 *      Comments: Strongly inspired by Avnet's PS I2C example
 */
#include <stdio.h>
#include "xparameters.h"
#include "xil_printf.h"
#include "ads1015.h"

XIicPs Iic;		/**< Instance of the IIC Device */

int main(){
//	XIicPs Iic;		/**< Instance of the IIC Device */
	XIicPs_Config *Config;
	int Status, i;
	s16 value = 0;

	// Fetch i2c parameters from config lut and init the peripheral
	Config = XIicPs_LookupConfig(XPAR_XIICPS_0_DEVICE_ID);
	Status = XIicPs_CfgInitialize(&Iic, Config, Config->BaseAddress);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	// Perform self-test
//	Status = XIicPs_SelfTest(&Iic);
	if (Status != XST_SUCCESS) {
		return XST_FAILURE;
	}

	//Set the IIC serial clock rate.
	XIicPs_SetSClk(&Iic, 100000);
//    printf("PS I2C Initialized\n\r");		// This was, somehow, corrupting the XIicPs instance's values

    while(1){
//    	Status = I2C_read(&Iic, XPAR_XIICPS_0_DEVICE_ID, ADS1015_ADDRESS,
//    			ADS1015_REG_POINTER_CONFIG, &value);
    	value = readADCSingleEnded(&Iic, XPAR_XIICPS_0_BASEADDR, 1);
    	for(i = 0; i < 100000; i++){};
    }

}
