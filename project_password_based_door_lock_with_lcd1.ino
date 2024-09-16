//C++ Code
//Author: Piyush Mishra

#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Servo.h>

#define Pwd_Len 5

Servo myservo;

LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {0, 1, 2, 3};
byte colPins[COLS] = {4, 5, 6, 7};
Keypad customKeypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

int pos = 0;

char Data[Pwd_Len];
char Master[Pwd_Len] = "A753";
byte data_count = 0, master_count = 0;

bool door = false;
char customKey;

void setup()
{
  myservo.attach(10);
  ServoClose();
  lcd.begin(16, 2);
  lcd.print("Door is Locked !");
  lcd.setCursor(0, 1);
  lcd.print("Loading...");
  delay(3000);
  lcd.clear();
}

void loop()
{
    Open();
}

void clearData()
{
  while (data_count != 0)
  { 
    Data[data_count--] = 0;
  }
  return;
}

void ServoClose()
{
  for (pos = 90; pos >= 0; pos -= 10) { 
    myservo.write(pos);
  }
}

void ServoOpen()
{
  for (pos = 0; pos <= 90; pos += 10) {
    myservo.write(pos);  
  }
}

void Open()
{
  lcd.setCursor(0, 0);
  lcd.print("Enter Password :");
  
  customKey = customKeypad.getKey();
  if (customKey)
  {
    Data[data_count] = customKey;
    lcd.setCursor(data_count, 1);
    lcd.print(Data[data_count]);
    data_count++;
  }

  if (data_count == Pwd_Len - 1)
  {
    if (!strcmp(Data, Master))
    {
      lcd.clear();
      lcd.print("Opening Door...");
      delay(1000);
      ServoOpen();
      lcd.clear();
      lcd.print("Opened");
      door = true;
      lcd.setCursor(0, 1);
      lcd.print("Waiting...");
      delay(4000);
      lcd.clear();
      lcd.print("Closing Door...");
      delay(1000);
      ServoClose();
      lcd.clear();
      lcd.print("Closed");
      door = false;
      delay(2000);
    }
    else
    {
      lcd.clear();
      lcd.print("ERROR");
      door = false;
    }
    delay(2000);
    lcd.clear();
    clearData();
  }
}