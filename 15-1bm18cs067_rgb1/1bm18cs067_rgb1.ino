#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
//Parameters: (rs, enable, d4, d5, d6, d7) 
int red_light_pin= 10;
int green_light_pin = 8;
int blue_light_pin = 9;
void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}
void loop() {
  lcd.setCursor(0,0);
  
  RGB_color(255, 0, 0); // Red
  lcd.print("RED");
  delay(1000);
  lcd.clear();
  
  RGB_color(0, 255, 0); // Green
  lcd.print("GREEN");
  delay(1000);
  lcd.clear();
  
  RGB_color(0, 0, 255); // Blue
  lcd.print("BLUE");
  delay(1000);
  lcd.clear();

  RGB_color(255, 255, 255); // White
  lcd.print("WHITE");
  delay(1000);
  lcd.clear();
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}