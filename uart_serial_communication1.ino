//C++ code
//Author: Piyush Mishra

char mystr[20] = "HelloWorld"; //String data

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  Serial.write(mystr,20); //Write the serial data
  delay(1000);
}