#include <Arduino.h>
#include "dashboard.h"
#include "sensors.h"

Dashboard dashboard;
Sensors sensors;

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);

    dashboard.init();
    sensors.init();
}

void loop() {
  // put your main code here, to run repeatedly:
    sensors.update();

    dashboard.setRPM(sensors.getRPM);
    dashboard.setSpeed(sensors.getSpeed());

    dashboard.render();

    //This should make the updates happen 60 times a second
    delay(16);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}