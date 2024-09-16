//C++ Code
//Author: Piyush Mishra

int read_val = 0;

//Initialization
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  read_val = digitalRead(2);
  
  if(read_val == HIGH)
  {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  
  delay(15); 
}
