//C++ code
//Author: Piyush Mishra

void setup()
{
  //Serial Monitor
  Serial.begin(115200);
  pinMode(13,OUTPUT);
}

void loop()
{
  int sensorReading = analogRead(A0);

  Serial.println(sensorReading);
  
  int outputPitch = map(sensorReading, 0, 1023, 250, 5000);
  
  if(sensorReading != 0){
    tone(13, outputPitch);
  } else {
    noTone(13);
  }
  
 delay(10);
}