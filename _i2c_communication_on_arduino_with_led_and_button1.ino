//C++ Code
//Author: Piyush Mishra

#include <Wire.h>

int x = 0;

const int pushbutton = 4;
int buttonstate = 0;

void setup()
{

  pinMode(pushbutton, INPUT);
  // join i2c bus (address optional for master)
  Wire.begin();
  Serial.begin(9600);
}

void loop()
{
  buttonstate = digitalRead(pushbutton);
  
  if(buttonstate == HIGH){
  	x = 1;
  }else {
    x = 0;
  }
  
  Wire.beginTransmission(1); // transmit to device #1
  Wire.write(x);
  Wire.endTransmission();    // stop transmitting
  delay(500);
}