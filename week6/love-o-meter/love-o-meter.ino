int pins[] = {8, 9, 10};
int index = 0;

void setup() {
  Serial.begin(9600);

  pinMode(8, OUTPUT); // RED
  pinMode(9, OUTPUT); // YELLOW
  pinMode(10, OUTPUT); // GREEN
}

void loop() {
  int sensorValue = analogRead(A1);

//  Serial.println(sensorValue);

  if (sensorValue < 300){
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  } else if (sensorValue >= 300 && sensorValue < 600){
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
  } else if (sensorValue >= 600 && sensorValue < 900) {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  } else {
    for (int i = 0; i < 3; i = i + 1){
      if (i == index){
        digitalWrite(pins[i], HIGH);
      } else {
        digitalWrite(pins[i], LOW);
      }
    }
    index++;
    if (index > 2){
      index = 0;
    }
    delay(50);
  }
}
