//C++ Code
//Author: Piyush Mishra

int IR_remote = 0;

void setup(){
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  IR_remote = digitalRead(3);
  Serial.println(IR_remote);
  
  if(IR_remote==LOW){
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    delay(1000);
  }
  else{
    digitalWrite(7,LOW);
  }

}