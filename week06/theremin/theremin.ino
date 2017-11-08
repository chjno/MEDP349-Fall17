void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A1);

  int freq = map(sensorValue, 0, 1023, 0, 2000);

  tone(10, freq);
}
