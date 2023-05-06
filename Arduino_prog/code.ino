#include <Wire.h>
#include <Adafruit_Motorshield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"
Adafruit_Motorshield AFMS = Adafruit_Motorshield();
Adafruit_StepperMotor *myMotor = AFMS.getStepper(200,1);
void setup() {
  Serial.begin(9600);
  AFMS.begin(); //Freq of 1.6Khz
  myMotor->setSpeed(50);
}

void loop() {
  myMotor->step(2750, FORWARD, SINGLE);
  myMotor->step(2750, BACKWARD, SINGLE);
}
