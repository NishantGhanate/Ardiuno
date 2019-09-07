

//Esp8266 driver  http://arduino.esp8266.com/stable/package_esp8266com_index.json
#include <ESP8266WiFi.h>
#define WIFI_SSID "ktv"
#define WIFI_PASSWORD "1234@5678"


void setup() {
  Serial.begin(9600);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}
