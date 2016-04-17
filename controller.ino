#include "Keyboard.h"

const int UP_PIN    = 12;
const int LEFT_PIN  = 11;
const int DOWN_PIN  = 10;
const int RIGHT_PIN = 9;

void setup() {
  Serial.begin(9600);
  pinMode(UP_PIN, INPUT);
  Serial.println("Ok");
  //Keyboard.begin();
}

void loop() {
  Serial.println("noop");
  if (digitalRead(UP_PIN) == HIGH) {
  Serial.println("pressed");
    //Keyboard.write(0xDA);
  }
/*  if (digitalRead(DOWN_PIN) == HIGH) {
    Keyboard.write(0xD9);
  }
  if (digitalRead(LEFT_PIN) == HIGH) {
    Keyboard.write(0xD8);
  }
  if (digitalRead(RIGHT_PIN) == HIGH) {
    Keyboard.write(0xD7);
  }*/
  delay(100);
}
