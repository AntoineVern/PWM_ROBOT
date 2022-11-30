#include <Arduino.h>

void setup() {

// --Port serie--
  Serial.begin(115200);

// --Moteur1--
pinMode(A0, OUTPUT);
// --Moteur2--
pinMode(A1, OUTPUT);
// --Moteur3--
pinMode(A2, OUTPUT);
// --Moteur4--
pinMode(A3, OUTPUT);
// --Moteur5--
pinMode(A4, OUTPUT);
// --Moteur6--
pinMode(A5, OUTPUT);

// Configurer fonction du PWM
ledcSetup(A0, 10, 8);
}

void loop() {
  if (){
    ledcWrite(0, PWM);
  }
  if (){
    
  }
  if (){
    
  }
  if (){
    
  }
  if (){
    
  }
  if (){
    
  }
}