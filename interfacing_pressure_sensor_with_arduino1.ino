//C++ Code
//Author: Piyush Mishra

int force = 0;
int frequency = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  force = analogRead(A0);
  Serial.println(force);
  
  // mapping input force value to freq from 50 to 5000 Hz
  frequency = map(force, 0, 1023, 50, 5000);
  
  if (frequency>200){
   tone(3,frequency);
   Serial.println("Buzz!!!!");
   Serial.println(frequency);
  }else{
   //Turn off buzzer
   noTone(3);
  }  
}