#include <Arduino.h>
#include "LiquidCrystalRus.h"
LiquidCrystalRus lcd(2, 3, 4, 5, 6, 7);

void setup() 
{
  lcd.begin(20, 4);
  lcd.setCursor(0, 0);
  lcd.print("There was a man");
  lcd.setCursor(0, 1);
  lcd.print("Whose name was Borya");
  lcd.setCursor(0, 2);
  lcd.print("What does he eat?");
  lcd.setCursor(0, 3);
  lcd.print("A lot of bullets!");
}

void loop() 
{
  
}
