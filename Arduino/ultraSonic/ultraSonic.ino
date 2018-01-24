/*
 * This program is used to measure the distance to the next object.
 * Author: Anuj Jain.
 * @ianuj03
 */
#define TRIG 3
#define ECHO 5
void setup()
{
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}
long dis=0;
void loop(){
  digitalWrite(TRIG,LOW);//Resetting 
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);//At least 10 micro seconds is required
  digitalWrite(TRIG,LOW);
  long duration=pulseIn(ECHO,HIGH);
  long distance=(duration/2)/29.1;
  if(distance!=dis){
    Serial.print(distance);
    Serial.println(" cm");
    dis=distance;
  }
  delay(500);
}
