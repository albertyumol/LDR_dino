#include <Servo.h>

Servo servo1;

void setup() { 
  servo1.attach(9); 
  Serial.begin(9600);
}

void loop() { 
  int lightValue = analogRead(A0);

  if (lightValue <= 100) {
    servo1.write (40);
    Serial.println(lightValue);
    delay(100);
  }

  else {
    servo1.write (20);
    Serial.println(lightValue);
  }
}
