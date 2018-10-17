/* UNO32 DOESN'T HAVE CAN */


/**********************************************************************
* enhen this ma shit
***********************************************************************/

#ifndef __CHINOOK_STEERING_WHEEL_UTILS__
#define __CHINOOK_STEERING_WHEEL_UTILS__

enum CALIB_MODES
{
    GEAR_CALIB = 0,
    PITCH_CALIB,
    WEATHERCOCK_CALIB,
    MAST_CALIB,   
    
    //keep this one last
    MAX_CALIB
};

// Will be used to navigate the different calibrations.
//UINT8 iCurCalib = GEAR_CALIB;

// Volant switch masks
#define PITCH_MINUS_BUTTON      0x0001  //0b000000000001    
#define PITCH_PLUS_BUTTON       0x0200  //0b000100000000    
#define MAST_MODE_BUTTON        0x0002  //0b000000100000    
#define AQUISITION_BUTTON       0x0100  //0b001000000000    
#define DISPLAY_LEFT_BUTTON     0x0010  //0b000000010000
#define DISPLAY_RIGHT_BUTTON    0x0020  //0b000000001000
#define HORN_BUTTON             0x0040  //0b000000000100
#define AEROBRAKE_BUTTON        0x0080  //0b000010000000   
#define CALIB_ENGAGE_BUTTON     0x0008  //0b000000001000
#define CALIB_TOGGLE_BUTTON     0x0004  //0b000001000000
#define GEAR_DOWN_BUTTON        0x0400  //0b010000000000
#define GEAR_UP_BUTTON          0x0800  //0b100000000000

#endif	/* __CHINOOK_STEERING_WHEEL_UTILS__ */