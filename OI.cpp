#include "OI.h"

OI::OI() {
	leftStick = new Joystick(LEFT_JOYSTICK_PORT);
	rightStick = new Joystick(RIGHT_JOYSTICK_PORT);
	gamePad = new F310(GAME_PAD_PORT);
	leftArm = new KinectStick(LEFT_ARM_PORT);
	rightArm = new KinectStick(RIGHT_ARM_PORT);
}

Joystick * OI::GetLeftStick() {
	return leftStick;
}

Joystick * OI::GetRightStick() {
	return rightStick;
}

F310 * OI::GetGamePad() {
	return gamePad;
}

KinectStick * OI::GetLeftArm() {
	return leftArm;
}

KinectStick * OI::GetRightArm() {
	return rightArm;
}
