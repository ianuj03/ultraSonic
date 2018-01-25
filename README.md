# ultraSonic
Interfacing Ultrasonic sensor with Arduino UNO

One  of the most popular application of ultrasonic sensor is the SONAR technology.
It is used to measure the distance of an object by using sound waves.

Formula to calculate the distance is speed x time. And this result is to be divided by 2. Because the wave, strikes the signal and returns back.

### Components:
Name | Quantity
-----|---------
Arduino UNO/MEGA | 1
HC-SR04 Ultrasonic | 1
Jumper wire | 4+10
LCD | 1 (Optional)
Breadboard | 1 (if LCD used)

### Connection
##### HC-SR04:
```
Vcc- 5V power supply.
GND- Any of the ground pin.
Trig- a.k.a Trigger Pin; connect to a digital pin as an OUTPUT PIN.
ECHO- Connect to a digital pin as an INPUT PIN.
```
##### LCD:
```
VSS- Connect it to the ground;
VDD/Vcc- Connect it to the 5V from the board;
VO/VEE- Used to vary the contrast using a potentiometer, Connect it to the centre of the potentiometer and the other two as Vcc and GND;
R/W- Connect it to the Ground;
RS- Connect it to any digital PIN;
E- Connect it to any digital PIN;
D4-D7: Connect all these four pins to different digital PINS;
A- Connect it to 5V of the board; and
K- Connect it to the GND of the board.
```
