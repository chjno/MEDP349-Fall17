void setup() {
  Serial.begin(9600);
}

void loop() {
  int potVal = analogRead(A0);

  Serial.print(potVal);
  Serial.println();
}
