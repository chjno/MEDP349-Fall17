void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);

  Serial.println(sensorValue);
}
