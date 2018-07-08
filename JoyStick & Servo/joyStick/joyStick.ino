// Adding servo Header file

#include <Servo.h>

// Define number of Servos
Servo servo1;
Servo servo2;

//Define joystick analog input pin no.

int joyX = 0;
int joyY = 1;
int joyVal ;

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

  joyVal = analogRead(joyX);
  joyVal = map(joyVal , 0 , 1023 , 0 , 180);
  servo1.write(joyVal);
  Serial.println(joyVal);
  
  joyVal = analogRead(joyY);
  joyVal = map(joyVal , 0 , 1023 , 0 , 180);
  servo2.write(joyVal);
  Serial.println(joyVal);
 
  

}
