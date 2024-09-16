//C++ code
//Author: Piyush Mishra

int sensorState = 0;
int LEDPin = 13;
int PIRSensor = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(PIRSensor, INPUT);
  pinMode(LEDPin, OUTPUT);
}

void loop()
{
  // read the state of the sensor/digital input
  sensorState = digitalRead(PIRSensor);
  Serial.println(sensorState);
  
  // check if sensor pin is HIGH. if it is, set the
  // LED on.
  if (sensorState == HIGH) {
    digitalWrite(LEDPin, HIGH);
  } else {
    digitalWrite(LEDPin, LOW);
  }
  delay(10); 
}