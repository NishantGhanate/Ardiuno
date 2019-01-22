String incoming ;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Data from Ardiuno  ");
  delay(1000);
  if(Serial.available() > 0 )
  {
      incoming = Serial.readString();
      Serial.print("Data from python recvievd : ");
      Serial.println(incoming);
      
   }
   
   
}
