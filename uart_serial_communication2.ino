//C++ code
//Author: Piyush Mishra

char mystr[20]; //Initialized variable to store recieved data

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  Serial.readBytes(mystr,20); //Read the serial data and store in var
  Serial.println(mystr); //Print data on Serial Monitor
  delay(1000);
}