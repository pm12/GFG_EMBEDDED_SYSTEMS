//C++ Code
//Author: Piyush Mishra

const byte LED = 13;
const byte SW = 2;


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT);
}

void loop(){
  boolean val = digitalRead(2);
  
  if(val){
  digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
  
}