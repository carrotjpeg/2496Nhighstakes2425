// constructors for everything electrical

#include "api.h"
#include "auton.h"
#include "main.h"
#include "robot.h"
#include "piston.h"
#include "pros/motors.h"


// 2496v
#define LF_PORT 20;
#define LM_PORT 19;
#define LB_PORT 18;
#define RF_PORT 17;
#define RM_PORT 16;
#define RB_PORT 15;
#define INTAKE_PORT 9;

// rotation sensor
// pros::Rotation roto(ROTO_PORT);

// chassis motors
pros::Motor LF(LF_PORT, pros::E_MOTOR_GEARSET_06, true);
pros::Motor LM(LM_PORT, pros::E_MOTOR_GEARSET_06, true);
pros::Motor LB(LB_PORT, pros::E_MOTOR_GEARSET_06, true);
pros::Motor RF(RF_PORT, pros::E_MOTOR_GEARSET_06, false);
pros::Motor RM(RM_PORT, pros::E_MOTOR_GEARSET_06, false);
pros::Motor RB(RB_PORT, pros::E_MOTOR_GEARSET_06, false);

// intake
pros::Motor INTAKE(INTAKE_PORT, pros::E_MOTOR_GEARSET_06, true);

//pistons
Piston clampPiston(false, 1);

// angler for intake
// pros::ADIDigitalOut piston ('E', false);

// auton selector
// pros::ADIDigitalIn selec ('G');

pros::Imu imu(IMU_PORT);

// controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);
