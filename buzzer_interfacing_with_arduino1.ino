//C++ Code
//Author: Piyush Mishra

int o_BUZZERPin = 9;

//Initialization
void setup() {
  pinMode(o_BUZZERPin, OUTPUT);
}


//loop which repeats
void loop() {
  //100 Hz
  tone(o_BUZZERPin,100);
  delay(200);
  //400 Hz
  tone(o_BUZZERPin,400);
  delay(200);
  tone(o_BUZZERPin,600);
  delay(200);
  //noTone(o_BUZZERPin);
  //delay(2000);
}