#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
private:
	RobotDrive* robot;
public:
	DriveTrain();
	void InitDefaultCommand();
	void Drive(Joystick* joy);
};

#endif
