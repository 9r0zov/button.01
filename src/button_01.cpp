#include "Arduino.h"

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  int val = analogRead(A0);

  delay(200);
  Serial.print("value: ");
  Serial.println(val);
}
