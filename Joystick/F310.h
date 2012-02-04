#ifndef _F310_H_
#define _F310_H_

#include "Joystick.h"

/**
 * Class to facilitate input handling from a Logitech F310
 */
class F310 : public Joystick
{
public:
	typedef enum
	{
		kLeftStick,
		kRightStick,
	} StickType;
	
	typedef enum
	{
		kLeftXAxis,
		kLeftYAxis,
		kRightXAxis,
		kRightYAxis,
	} AxisType;
	
	typedef enum
	{
		kXButton,
		kAButton,
		kBButton,
		kYButton,
		kLeftBumper,
		kRightBumper,
		kLeftTrigger,
		kRightTrigger,
		kBackButton,
		kStartButton,
		kLeftStickButton,
		kRightStickButton,
	} ButtonType;
	
	F310(UINT32 port);
	~F310();
	
	float GetX(StickType stick);
	float GetY(StickType stick);
	float GetAxis(AxisType axis);
	float GetDPadX(void);
	float GetDPadY(void);
	
	bool GetButton(ButtonType button);
	
private:
    static const UINT32 kLeftXAxisNum = 1;
    static const UINT32 kLeftYAxisNum = 2;
    static const UINT32 kRightXAxisNum = 3;
    static const UINT32 kRightYAxisNum = 4;
    static const UINT32 kDPadXAxisNum = 5;
    static const UINT32 kDPadYAxisNum = 6;
    
    static const UINT32 kXButtonNum = 1;
    static const UINT32 kAButtonNum = 2;
    static const UINT32 kBButtonNum = 3;
    static const UINT32 kYButtonNum = 4;
    static const UINT32 kLeftBumperNum = 5;
    static const UINT32 kRightBumperNum = 6;
    static const UINT32 kLeftTriggerNum = 7;
    static const UINT32 kRightTriggerNum = 8;
    static const UINT32 kBackButtonNum = 9;
    static const UINT32 kStartButtonNum = 10;
    static const UINT32 kLeftStickButtonNum = 11;
    static const UINT32 kRightStickButtonNum = 12;
};

#endif // _F310_H_

