unsigned long timestamp = 0;

void setup() {
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(7);

  if (buttonState == HIGH) {

    if (millis() - timestamp > 100) {
      timestamp = millis();
      if (digitalRead(8) == HIGH) {
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
      } else {
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
      }
    }
    //    digitalWrite(8, HIGH);
    //    delay(1000);
    //    digitalWrite(8, LOW);
    //    delay(1000);
  }
}
