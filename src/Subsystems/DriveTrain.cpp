#include "DriveTrain.h"
#include "Commands/DriveWithJoystick.h"

DriveTrain::DriveTrain() :
		Subsystem("DriveTrain")
{
	robot = new RobotDrive(new CANTalon(3), new CANTalon(4));
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriveTrain::Drive(Joystick* joy){
	robot->ArcadeDrive(joy);
}
