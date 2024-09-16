//C++ code
//Author: Piyush Mishra

#include <Servo.h>

Servo servo1;  // Create object for Servo motor 1

int angle = 0;     // Variable to store the position

void setup()
{
  servo1.attach(9); //set PWM pin 9 for Servo motor 1
}
void loop()
{
  //analogRead() function to read the analog value from analog pin A0
  int potValue = analogRead(A0);
  //map() function to convert the analog potValue 
  //(ranging from 0 to 1023)
  //to a desired servo angle range
  //(0 to 180 degrees)
  angle = map(potValue, 0, 1023, 0, 180);
  servo1.write(angle);
  delay(15); 
}