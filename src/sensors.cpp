#include "sensors.h"

void Sensors::init() {}

void Sensors::update() 
{
    //Simulating signals
    rpm +=50;
    if (rpm > 12000) rpm = 0;

    speed = rpm * 0.02;
}

int Sensors::getRPM()
{
    return rpm;
}

float Sensors::getSpeed() 
{
    return speed;
}