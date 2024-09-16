//C++ Code
//Author: Piyush Mishra

const int motorPin1  = 11;  // Pin 2 of L293D
const int motorPin2  = 10;  // Pin 7 of L293D
const int slider = 2;

int buttonState;

void setup()
{
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(slider, INPUT);
}

void loop()
{
  buttonState = digitalRead(slider);
  if(buttonState == HIGH) 
  {
  	digitalWrite(motorPin1, HIGH);
  	digitalWrite(motorPin2, LOW);
  }
  else
  {
  	digitalWrite(motorPin1, LOW);
  	digitalWrite(motorPin2, HIGH);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}