#include <Wire.h>
#include <E:\DESIGN\lm75\LM75.h>

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

LM75 sensor(LM75_ADDRESS);

void setup (void){

//  Serial.begin(9600);

  Wire.begin();
  
  lcd.begin(16, 2);
  lcd.print("Current temp: ");
}

void loop() {
//  Serial.print("Current temp: ");
//  Serial.print(sensor.temp());
//  Serial.println(" C");

  lcd.setCursor(0, 1);
  lcd.print(sensor.temp());
  delay(1000);
}
