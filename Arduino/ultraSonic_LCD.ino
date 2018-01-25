#include<LiquidCrystal.h>
#define trig 9
#define echo 8
LiquidCrystal lcd(2,3,4,5,6,7);//rs,en,d4,d5,d6,d7
void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  //Serial.begin(9600);
  lcd.begin(16,2);//column,row
  lcd.setCursor(0,0);
  lcd.print("Distance:");
  digitalWrite(trig,LOW);
}
void loop(){
  digitalWrite(trig,HIGH);
  delayMicroseconds(12);
  digitalWrite(trig,LOW);
  long duration=pulseIn(echo,HIGH);
  long distance=(duration/2)/29.1;
  //Serial.println(distance);
  lcd.setCursor(0,1);
  lcd.print(distance+1);
  lcd.print(" cm");
  //delay(500);
}
