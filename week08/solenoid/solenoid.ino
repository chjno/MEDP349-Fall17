/* 
 * button on pin 7
 * transistor controlling 12V solenoid on pin 9
 */

void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(9, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(7);

  digitalWrite(9, buttonState);
}
