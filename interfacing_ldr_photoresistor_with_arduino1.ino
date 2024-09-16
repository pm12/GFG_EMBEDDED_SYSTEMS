//C++ Code
//Author: Piyush Mishra

const int ledPin = 9;
const int ldrPin = A0;

void setup() {
  
Serial.begin(9600);          
pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);

}

void loop() {

int ldrValue = analogRead(ldrPin);
Serial.println(ldrValue);
  
if (ldrValue >=100) { 
 digitalWrite(ledPin, HIGH);
 Serial.println("LDR is DARK, LED is ON");
}
else {
 digitalWrite(ledPin, LOW);
 Serial.println("LED OFF");
}
  
}