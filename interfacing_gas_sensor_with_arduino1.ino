//C++ Code
//Author: Piyush Mishra

int LEDPin = 13;
int BUZZERPin = 3;

const int gas = 0;
int MQ2pin = A0;


void setup() {
  Serial.begin(9600);
  pinMode(LEDPin,OUTPUT);
  pinMode(BUZZERPin,OUTPUT);
}

void loop() {
 float sensorValue;
 sensorValue = analogRead(MQ2pin);
 Serial.println(sensorValue);

 if(sensorValue >= 470){
   digitalWrite(LEDPin,HIGH);
   tone(BUZZERPin,1000);
 }
 else{
   digitalWrite(LEDPin,LOW);
   noTone(BUZZERPin);
  } 
 delay(500);
}