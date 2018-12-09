/*
  Sample user interface.
  User enters number on serial port.
*/
int Num; 

void setup() {
  // initialize serial communication and set data rate for serial
  // data communication
  Serial.begin(9600);
}

void loop() {
  // print inquiry at the serial port (see Serial monitor)
  Serial.println("Enter an integer: ");
  while(Serial.available() == 0) { // wait for user to enter number
  }
  Num = Serial.parseInt();  // read number from serial port
  // Print entered value
  Serial.print("You entered: ");
  Serial.println(Num);
}



