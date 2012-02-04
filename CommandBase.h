#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/Drive.h"
#include "Subsystems/Conveyor.h"
#include "Subsystems/Roller.h"
#include "Subsystems/Turret.h"
#include "Subsystems/GiantFour.h"
#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static Drive *drive;
	static Roller *roller;
	static Conveyor *conveyor;
	static Turret *turret;
	static GiantFour *giantFour;
	static OI *oi;
};

#endif
