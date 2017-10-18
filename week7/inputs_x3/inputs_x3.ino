void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  int potVal = analogRead(A0);
  int lightVal = analogRead(A1);
  int buttonVal = digitalRead(7);

  Serial.print(potVal);
  Serial.print(',');
  Serial.print(lightVal);
  Serial.print(',');
  Serial.print(buttonVal);
  Serial.println();
}
