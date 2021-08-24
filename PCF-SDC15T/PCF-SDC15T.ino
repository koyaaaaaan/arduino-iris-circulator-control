#include <Arduino.h>
#include <IRremote.h>

IRsend irsend;
int SENDER_PIN = 4;
int SENDBIT = 32;
int delayMSec = 2000;

void setup()
{
  Serial.begin(115200);
  irsend.begin(SENDER_PIN, ENABLE_LED_FEEDBACK); 
}

void loop() {
  Serial.println("Power on/off");
  irsend.sendNEC(0x017B00FF,SENDBIT);
  delay(delayMSec);
  
  Serial.println("Turn holizontally");
  irsend.sendNEC(0x017B50AF,SENDBIT);
  delay(delayMSec);
  
  Serial.println("Turn vertically");
  irsend.sendNEC(0x017B708F,SENDBIT);
  delay(delayMSec);
  
  Serial.println("Weker wind");
  irsend.sendNEC(0x017B28D7,SENDBIT);
  delay(delayMSec);
  
  Serial.println("Stronger wind");
  irsend.sendNEC(0x017B6897,SENDBIT);
  delay(delayMSec);
  
  Serial.println("Wind mode: drying clothes");
  irsend.sendNEC(0x017B8877,SENDBIT);
  delay(delayMSec);
  
  Serial.println("Wind mode: continuously");
  irsend.sendNEC(0x017B906F,SENDBIT);
  delay(delayMSec);
  
  Serial.println("Wind mode: naturally");
  irsend.sendNEC(0x017BB04F,SENDBIT);
  delay(delayMSec);
  
  Serial.println("Power off");
  irsend.sendNEC(0x017B30CF,SENDBIT);
  delay(delayMSec);
  
}
