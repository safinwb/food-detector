const int frootSense = 0;
int frootResistance, high = 0, low = 1023;
int frootDetect;
#include <LiquidCrystal.h>                    //remove this if u don't have LCD, anyways it wont affect.
LiquidCrystal lcd(12,11,5,4,3,2);           //remove this if u don't have LCD, anyways it wont affect.
void setup(){
Serial.begin(9600);
lcd.begin(16, 2);                      //remove this if u don't have LCD, anyways it wont affect.
lcd.clear();                              //remove this if u don't have LCD, anyways it wont affect. 
}
void loop()
{
lcd.clear();                    //remove this if u don't have LCD, anyways it wont affect.
lcd.setCursor(0,0);       //remove this if u don't have LCD, anyways it wont affect. 
lcd.print("Food Detect:");         //remove this if u don't have LCD, anyways it wont affect.
lcd.setCursor(0,1);              //remove this if u don't have LCD, anyways it wont affect.
frootResistance = analogRead(frootSense);
Serial.print("Resistance:");
Serial.print(frootResistance);
Serial.print("\n");
if (frootResistance>400 & frootResistance<700){
Serial.print("Cucumber \n");
lcd.print("Cucumber");     //remove this if u don't have LCD, anyways it wont affect.
}
else if(frootResistance>140 & frootResistance<300){
Serial.print("Apple");
lcd.print("Apple");    //remove this if u don't have LCD, anyways it wont affect.
}
else {
Serial.print("No Food \n");
lcd.print("No Food");     //remove this if u don't have LCD, anyways it wont affect.
}
delay(1000);
}