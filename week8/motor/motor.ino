/* 
 * IR distance sensor on pin A0
 * transistor controlling 12V DC motor on pin 9
 */

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int distance = analogRead(A0);

  int motorSpeed = map(distance, 0, 1023, 0, 255);
  motorSpeed = constrain(motorSpeed, 0, 255);
  
  analogWrite(9, motorSpeed);
}
