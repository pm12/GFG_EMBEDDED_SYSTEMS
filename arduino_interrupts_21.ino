//C++ Interrupt
//Author: Piyush Mishra

volatile boolean ledOn = false;
int o_BUZZERPin = 8;
int o_REDLEDPin = 13;
int o_GREENLEDPin = 4;
int i_PUSHButton = 2;

void setup() {
  pinMode(o_REDLEDPin,OUTPUT);
  pinMode(o_BUZZERPin,OUTPUT);
  pinMode(o_GREENLEDPin,OUTPUT);
  pinMode(i_PUSHButton,INPUT);
  //Turn on green led by default
  digitalWrite(o_GREENLEDPin,HIGH);
  //Code Portable maps the pin to interrupt vector number
  attachInterrupt(digitalPinToInterrupt(2),buttonPressed,RISING);
}

void loop() {
}

//ISR
void buttonPressed()
{
  //Turns the buzzer and red led off, green led on
  if(ledOn)
  {
    digitalWrite(o_GREENLEDPin,HIGH);
    noTone(o_BUZZERPin);    
    ledOn = false;
    digitalWrite(o_REDLEDPin,LOW);
  }else
  { 
    //Turns on red led and buzzer, greed led off
    digitalWrite(o_GREENLEDPin,LOW);
    //261Hz
    tone(o_BUZZERPin,261);    
    ledOn = true;
    digitalWrite(o_REDLEDPin,HIGH);
  }
}


