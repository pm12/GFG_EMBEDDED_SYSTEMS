//C++ code
//Author: Piyush Mishra

//Include the libraries
#include <Keypad.h>
#include <LiquidCrystal.h>


const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
                             {'1','2','3','A'},
                             {'4','5','6','B'},
                             {'7','8','9','C'},
                             {'*','0','#','D'}
                                              };

byte rowPins[ROWS] = {13, 12, 11, 10}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 8, 1, 0}; //connect to the column pinouts of the keypad
//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16, 2);
  lcd.print("Hello World");
  delay(2000);
  lcd.clear();
  lcd.blink();
  lcd.setCursor(0, 0);
}
void loop()
{
char customKey = customKeypad.getKey();
if (customKey) 
  {
    lcd.print(customKey);
  }
} 