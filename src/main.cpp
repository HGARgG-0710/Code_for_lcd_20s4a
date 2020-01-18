#include <Arduino.h>
#include "LiquidCrystalRus.h"
LiquidCrystalRus lcd(2, 3, 4, 5, 6, 7);

void setup() 
{
  lcd.begin(20, 4);
  lcd.setCursor(0, 0);
  lcd.print("Жил на свете человек");
  lcd.setCursor(0, 1);
  lcd.print("Жик-Форель-АрмяноХэт");
  lcd.setCursor(0, 2);
  lcd.print("ЧтоУжЕст Жик-Форель?");
  lcd.setCursor(0, 3);
  lcd.print("Доширакиs и свирель!");
}

void loop() 
{
  
}