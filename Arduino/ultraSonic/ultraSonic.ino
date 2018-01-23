/*
 * This program is used to measure the distance to the next object.
 * Author: Anuj Jain.
 * @ianuj03
 */
#define trig 3
#define echo 5
void setup()
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}
long dis=0;
void loop(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  long duration=pulseIn(echo,HIGH);
  long distance=(duration/2)/29.1;
  if(distance!=dis){
    Serial.print(distance);
    Serial.println(" cm");
    dis=distance;
  }
  delay(500);
}
