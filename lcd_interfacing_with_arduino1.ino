//C++ Code
//Author: Piyush Mishra

// include the library code
#include <LiquidCrystal.h>
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
// create an lcd object of type liquid crystal
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//Initialize or one time dispplay
void setup() {
  // set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  
  // Print a message to the LCD.
  lcd.print("Hello World!");
  delay(2000);
  //scroll the content towards the right
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }
  //clear the screen
  lcd.clear();
  lcd.setCursor(6, 0);
  lcd.print("Count!");
}

void loop() {
    lcd.setCursor(8, 1);
    // print the number of seconds since reset:
    lcd.print(millis() / 1000);
}