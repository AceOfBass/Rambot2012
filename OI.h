#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "Joystick/F310.h"
#include "RobotMap.h"

class OI {
private:
	Joystick *leftStick;
	Joystick *rightStick;
	F310 *gamePad;
	KinectStick *leftArm;
	KinectStick *rightArm;
public:
	OI();
	Joystick * GetLeftStick();
	Joystick * GetRightStick();
	F310 * GetGamePad();
	KinectStick * GetLeftArm();
	KinectStick * GetRightArm();
};

#endif
