//C++ Code
//Author: Piyush Mishra
/*
  For Loop Iteration

 Demonstrates the use of a for() loop.
 Lights multiple LEDs in sequence, then in reverse.

 The circuit:
 * LEDs from pins 3 through 7 to ground
 http://www.arduino.cc/en/Tutorial/ForLoop
 */

int timer = 200;           // The higher the number, the slower the timing.

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 3; thisPin < 6; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  
  // loop from the lowest pin to the highest:
  for (int thisPin = 3; thisPin < 6; thisPin++) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = 5; thisPin >= 3; thisPin--) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
}