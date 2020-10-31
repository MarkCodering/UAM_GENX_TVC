/*
This is program aims to control the thrust vector control (TVC) vehicle
using Arduino library and C programming Language
Author: Mark Chen (陳皓圓) and 許哲維
//Version: 0.1 (0 means that this is a initial script for the control system, testing and verification are required)
//System Control Concept:
//Stabilisation = (expectation - setpoint)*damper
//Stabilisation <=> Fuzzy Control Value Map
*/

#include<Arduino.h>
#include<Wire.h>
#include<Servo.h>
#include<ADXL345.h>
#include<MPU6050_light.h>

float setpoint_z = 0;
float setpoint_angle_xz;
float setpoint_angle_yz;

Servo Servo_XR;
Servo Servo_XL;
Servo Servo_YR;
Servo Servo_YL
Servo Thruster;

ADXL345 ACC(ADXL345_STD);
MPU6050 mpu(Wire);

//Fuzzy Logic Control Variables Declaration and Fuzzy Mapping Zone
/*
--> 
*/

//Stage Machine Data Zone:
//Stage 1: Lift-off -> 
//Stage 2: Stabilisation and Hovering -> 
//Stage 3: Hozential Hovering 
//Stage 4: Stabilisation and Landing Site Lockdown
//Stage 5: Landing and Touchdown

void setup()
{
    Serial.begin(9600);
    Wire.begin();
  
    ServoXZ.attach(9);
    ServoYZ.attach(13);
    Thruster.attach(7);
  
    //Setup the sensors (ADXL345)
    mpu.begin();
    mpu.calcGyroOffsets();

    //System Test:
    Thruster.write(300);
    Servo_XR.write(0);
    Servo_XL.write(0);
    Servo_YR.write(0);
    Servo_YL.write(0);


    delay(10000); //Delay for ten seconds for final confirmation and countdown
}

void loop()
{
    mpu.update();

    //Stage Machine Scope
    if() //Stage 1 (Lift-off) (All motion stops and the GPS shows the vehicle is at launch site)
    {
        //Thrust Configruation and Stablisation
    }else if() //(Stabilisation and Hovering)
    {
        //XY Stablisation
    }else if() //(Hovering)
    {
        //XZ Stablisation
    }else if() //(Stabilisation and Landing Site Lockdown)
    {
        //Landing
    }else if() //(Landing and Touchdown)
    {
        //Landing and Touchshut
    }
}

void thrust_control ()
{
    //Thrust Control and Stabilisation
}

void XZ_Control()
{
 8   //XY Angle Stabilisation
}

void YZ_Control()
{
    //YZ Angular Stabilisation and Control
}