#include <Arduino.h>

void setup() {
  // --LED--
  pinMode(21, OUTPUT);
  // --LED--
  pinMode(21, OUTPUT);
  // --LED--
  pinMode(21, OUTPUT);
  // --LED--
  pinMode(21, OUTPUT);
  // --LED--
  pinMode(21, OUTPUT);
  // --LED--
  pinMode(21, OUTPUT);

  // Configurer fonction du PWM
  ledcSetup(0, 10, 8);
}

void loop() {
  // put your main code here, to run repeatedly:
}