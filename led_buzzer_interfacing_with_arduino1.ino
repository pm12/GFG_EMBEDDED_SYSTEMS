//C++ Code
//Author: Piyush Mishra

//Initialization
void setup()
{
  pinMode(13, OUTPUT); //RED LED
  pinMode(12,OUTPUT); // YELLOW LED
  pinMode(11,OUTPUT); //GREEN LED
  pinMode(7,OUTPUT); //BUZZER
}

void loop()
{
  //RED LED
  digitalWrite(13,HIGH);
  if (digitalRead(13)==HIGH)
 {
    tone(7,1000); //1000Hz
 }
  delay(1000); //Wait for 1s
  digitalWrite(13,LOW);
  
  //YELLOW LED
  digitalWrite(12,HIGH);
  if (digitalRead(12)==HIGH)
 {
    tone(7,500); //550Hz
 }
  delay(1000);
  digitalWrite(12,LOW);

  //GREEN LED
  digitalWrite(11,HIGH);
  if (digitalRead(11)==HIGH)
 {
    tone(7,250);
 }
  delay(1000);
  digitalWrite(11,LOW);
  
}