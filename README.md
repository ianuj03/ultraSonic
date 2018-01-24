# ultraSonic
Interfacing Ultrasonic sensor with Arduino UNO

One  of the most popular application of ultrasonic sensor is the SONAR technology.
It is used to measure the distance of an object by using sound waves.

#### The sensor user here is HC-SR04

Formula to calculate the distance is speed x time. And this result is to be divided by 2. Because the wave, strikes the signal and returns back.

### Connection
```
Vcc- 5V power supply.
GND- Any of the ground pin.
Trig- a.k.a Trigger Pin; connect to a digital pin as an OUTPUT PIN.
ECHO- Connect to a digital pin as an INPUT PIN.
```
