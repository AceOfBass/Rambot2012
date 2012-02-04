#include "F310.h"
#include "Utility.h"

/**
 * Construct an instance of an F310.
 *
 * @param port The driverstation port the F310 is plugged into.
 */
F310::F310(UINT32 port)
	: Joystick(port)
{
	
}

/**
 * Destruct an instance of an F310.
 */
F310::~F310(void)
{
	
}

/**
 * Get the X value of a stick on the F310.
 *
 * @param stick The stick to read from, either kRightStick or kLeftStick.
 * @return The X value of the specified stick.
 */
float F310::GetX(StickType stick)
{
	switch(stick)
	{
	case kRightStick:
		return GetRawAxis(kRightXAxisNum);
	case kLeftStick:
		return GetRawAxis(kLeftXAxisNum);
	default:
		return 0.0;
	}
}

/**
 * Get the Y value of a stick on the F310.
 *
 * @param stick The stick to read from, either kRightStick or kLeftStick.
 * @return The Y value of the specified stick.
 */
float F310::GetY(StickType stick)
{
	switch(stick)
	{
	case kRightStick:
		return GetRawAxis(kRightYAxisNum);
	case kLeftStick:
		return GetRawAxis(kLeftYAxisNum);
	default:
		return 0.0;
	}
}

/**
 * Get the value of a stick axis on the F310.
 *
 * @param axis The axis to read from.
 * @return The value of the specified axis.
 */
float F310::GetAxis(AxisType axis)
{
	switch(axis)
	{
	    case kLeftXAxis: return GetX(kLeftStick);
	    case kLeftYAxis: return GetY(kLeftStick);
	    case kRightXAxis: return GetX(kRightStick);
	    case kRightYAxis: return GetY(kRightStick);
	    default:
	    	return 0.0;
	}
}

/**
 * Get the X value of the directional pad on the F310.
 *
 * @return The X value of the directional pad.
 */
float F310::GetDPadX(void)
{
	return GetRawAxis(kDPadXAxisNum);
}

/**
 * Get the Y value of the directional pad on the F310.
 *
 * @return The Y value of the directional pad.
 */
float F310::GetDPadY(void)
{
	return GetRawAxis(kDPadYAxisNum);
}

/**
 * Get the state of a button on the F310.
 *
 * @param button The button to read from.
 * @return The state of the specified button.
 */
bool F310::GetButton(ButtonType button)
{
	switch(button)
	{
	case kXButton:
		return GetRawButton(kXButtonNum);
	case kAButton:
		return GetRawButton(kAButtonNum);
	case kBButton:
		return GetRawButton(kBButtonNum);
	case kYButton:
		return GetRawButton(kYButtonNum);
	case kLeftBumper:
		return GetRawButton(kLeftBumperNum);
	case kRightBumper:
		return GetRawButton(kRightBumperNum);
	case kLeftTrigger:
		return GetRawButton(kLeftTriggerNum);
	case kRightTrigger:
		return GetRawButton(kRightTriggerNum);
	case kBackButton:
		return GetRawButton(kBackButtonNum);
	case kStartButton:
		return GetRawButton(kStartButtonNum);
	case kLeftStickButton:
		return GetRawButton(kLeftStickButtonNum);
	case kRightStickButton:
		return GetRawButton(kRightStickButtonNum);
	default:
		return false;
	}
}

