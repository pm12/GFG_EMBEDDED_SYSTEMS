//C++ code
//Author: Piyush Mishra

int switchstate1=0;
int switchstate2=0;
//Initialization
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
 
}

void loop()
{
  switchstate1=digitalRead(2);
  if(switchstate1==HIGH)
  {
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); 
  }
  switchstate2=digitalRead(3);
  if(switchstate2==HIGH)
  {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
  }
}