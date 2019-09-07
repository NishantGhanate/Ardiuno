

// Esp8266 driver  http://arduino.esp8266.com/stable/package_esp8266com_index.json
#include <ESP8266WiFi.h>
#define WIFI_SSID "ktv"
#define WIFI_PASSWORD "1234@5678"

// https://github.com/mobizt/Firebase-ESP8266
#include <FirebaseESP8266.h>
#include <FirebaseESP8266HTTPClient.h>
#include <FirebaseJson.h>
#include <jsmn.h>

//3. Declare the Firebase Data object in global scope
FirebaseData firebaseData;

String ldrPath = "users/3shcyGOhrdMgI4PLZTCf66y0wMZ2/sensors/ldr";
String pirPath = "users/3shcyGOhrdMgI4PLZTCf66y0wMZ2/sensors/pir";
String tempPath = "users/3shcyGOhrdMgI4PLZTCf66y0wMZ2/sensors/temp";
String buzzPath = "users/3shcyGOhrdMgI4PLZTCf66y0wMZ2/sensors/buzz";

void setup() {
  // Setup Esp8266 wifi
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
  
  //4. Setup Firebase credential in setup()
  Firebase.begin("https://smartsecurity-38229.firebaseio.com/", "bx5oEHYlFiNAatcISAVoyVhlYLDncoNIkqTi8XNt");
  Firebase.reconnectWiFi(true);
 //6. Optional, set number of error retry
 Firebase.setMaxRetry(firebaseData, 5);
 
}
int i = 0;
void loop() {
  // put your main code here, to run repeatedly:
  // set value
   if (Firebase.getInt(firebaseData, buzzPath)) {

    if ((firebaseData.dataType() == "int")) {
      Serial.println(firebaseData.intData());
    }

  } else {
    Serial.println(firebaseData.errorReason());
  }
  delay(1000);
  // if set does not use pushInt
  Firebase.setInt(firebaseData,buzzPath,i);
  i = i + 1;
  
}
