#include <Arduino.h>
#include <WiFi.h>

// add new file .
const char *ssid = "VANNAM";
const char *password = "12345678";

void setup() {
  Serial.begin (112500);
  WiFi.softAP(ssid,password);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }