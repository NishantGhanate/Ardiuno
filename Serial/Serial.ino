void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0 )
  {
    if(Serial.read() == 's')
    {
      digitalWrite(3,HIGH);
     }     
   }
   else
   {
    digitalWrite(13,LOW)
    }
}
