 #include <Servo.h>
Servo servo1; // create servo object
Servo servo2; // create servo object

int servoPin1 = 7;            // digital output to which signal wire(yellow) of first servo is connected
int servoPin2 = 8;                      

int incomingByte = 0;   // for incoming serial data
String incomingCordinates ;


void setup() {
  Serial.begin(9600);
  servo1.attach(servoPin1); // attach the servo to digital output 7
  servo1.write(90);         // center the servo
  delay(1000);
}

void loop() {
  if(Serial.available() > 0 )
  {
      //incomingByte = Serial.read();
      //Serial.print("I received: ");
      //Serial.println(incomingByte, DEC);  // say what you got: will print its ASCII VALUE
      
      //incomingCordinates = Serial.parseInt();
      incomingCordinates = Serial.readString();
     
      Serial.print("I also received: ");
      Serial.print(incomingCordinates);
      
      servo1.write(0);               // move first servo to pos 0
      delay(1000);
      servo1.write(180);            // move first servo to pos 180
      delay(1000);         
      
   }

  
}
