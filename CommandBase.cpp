#include "CommandBase.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
Drive * CommandBase::drive = NULL;
Roller * CommandBase::roller = NULL;
Conveyor * CommandBase::conveyor = NULL;
Turret * CommandBase::turret = NULL;
GiantFour * CommandBase::giantFour = NULL;
OI * CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drive = new Drive();
	roller = new Roller();
	conveyor = new Conveyor();
	turret = new Turret();
	giantFour = new GiantFour();
	oi = new OI();
}
