#include <Servo.h>

Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(8);

}

void loop() {
  int sensorValue = analogRead(A0);

  int angle = map(sensorValue, 0, 1023, 0, 180);
  Serial.println(angle);
  myservo.write(angle);
  delay(20);

}
