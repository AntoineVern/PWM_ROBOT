#include <Arduino.h>

void setup() {

// --Port serie--
  Serial.begin(115200);

// --Moteur1--
pinMode(5, OUTPUT);
// --Moteur2--
pinMode(18, OUTPUT);
// --Moteur3--
pinMode(19, OUTPUT);
// --Moteur4--
pinMode(16, OUTPUT);
// --Moteur5--
pinMode(17, OUTPUT);
// --Moteur6--
pinMode(21, OUTPUT);

// Configurer fonction du PWM
ledcSetup(0, 10, 8);
ledcSetup(1, 10, 8);
ledcSetup(2, 10, 8);
ledcSetup(3, 10, 8);
ledcSetup(4, 10, 8);
ledcSetup(5, 10, 8);

// Attache le canal au GPIO pour etre controller
  ledcAttachPin(5, 0);
  ledcAttachPin(18, 1);
  ledcAttachPin(19, 2);
  ledcAttachPin(16, 3);
  ledcAttachPin(17, 4);
  ledcAttachPin(21, 5);
}

void loop() {
  //if (){
    ledcWrite(0, 42);
  //}
  //if (){
    ledcWrite(1, 84);
  //}
  //if (){
    ledcWrite(2, 126);
  //}
  //if (){
    ledcWrite(3, 168);
  //}
  //if (){
    ledcWrite(4, 210);
  //}
  //if (){
    ledcWrite(5, 252);
  //}
}