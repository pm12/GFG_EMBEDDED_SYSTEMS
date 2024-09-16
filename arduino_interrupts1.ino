//C++ Code
//Author: Piyush Mishra

volatile boolean ledOn = false;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  //attachInterrupt(0,buttonPressed,RISING);
  //Code Portable maps the ipin to interrupt vector number
  attachInterrupt(digitalPinToInterrupt(2),buttonPressed,RISING);
}

void loop() {
  
}

//ISR
void buttonPressed()
{
  if(ledOn)
  {
    ledOn = false;
    digitalWrite(13,LOW);
  }else
  {
    ledOn = true;
    digitalWrite(13,HIGH);
  }
}


