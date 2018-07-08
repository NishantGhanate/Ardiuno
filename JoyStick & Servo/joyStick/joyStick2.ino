// Adding servo Header file

#include <Servo.h>

// Define number of Servos
Servo servo1;
Servo servo2;

//Define joystick analog input pin no.

int joyX = 0;
int joyY = 1;
int joyValX ;
int joyValY ;

void setup() {
  // put your setup code here, to run once:
  // Attach servo on Digital pin 3 & 5 (PWM)
  Serial.begin(9600);
  servo1.attach(3);
  servo2.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read joystick analog values (0-1023)

  joyValX = analogRead(joyX);
  joyValX = map(joyValX , 0 , 1023 , 0 , 180);
  
  servo1.write(joyValX);
  Serial.println(joyValX);
  
  joyValY = analogRead(joyY);
  joyValY = map(joyValY , 0 , 1023 , 0 , 180);
  servo2.write(joyValY);
  Serial.println(joyValY);
 
  

}
