//C++ Code
//Author: Piyush Mishra
//LED Interfacing with Arduino


int o_LEDPin = 9;
//Initialization or setup for one time variables
void setup()
{
  pinMode(o_LEDPin, OUTPUT);
}


//Code inside this block repeats forever unless reset
void loop()
{
  digitalWrite(o_LEDPin, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(o_LEDPin, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}