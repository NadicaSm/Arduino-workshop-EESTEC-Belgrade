const int kPinLed = 13;

void setup() {
  pinMode(kPinLed, OUTPUT); 
}

void loop() {
  for (int ind = 0; ind < 5; ind++){
    digitalWrite(kPinLed, HIGH);
    delay(150);
    digitalWrite(kPinLed, LOW);
    delay(150);
  }
  delay(1500);
}



