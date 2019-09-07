


String incoming;
String con;
int a = 100;

void setup() {
  Serial.begin(9600);
 
 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println('temperate = '+String(a) );

  delay(1000);
  if(Serial.available() > 0 )
  {
      incoming = Serial.readString();
      Serial.println("\nData from python  : "+incoming ); 
   }
   
}
