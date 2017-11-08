void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);

  int brightness = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(10, brightness);
}
