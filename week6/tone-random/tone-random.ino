unsigned long timestamp = 0;

void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  if (millis() - timestamp > 500){
    timestamp = millis();
    tone(10, random(0, 2000));  
  }
  
//  delay(500);
}
