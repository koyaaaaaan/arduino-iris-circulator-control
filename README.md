# Arduino Iris Circulator Control
This is for controling Iris Circulator with Arduino Infrared Remote Controll.  
  
_This is just a demonstration. Please use this on your responsibility._

### Target 
Circulator Model: PCF-SDC15T  
Manifacture: Iris Ohyama Japan  
https://www.irisplaza.co.jp/index.php?KB=SHOSAI&SID=H274315F  

### Components You need for implementation
Arduino  
Infrared LED (100mA)  
Jump Wires   
Electrical Resistance (47o-mu)  
  
_If you need some triggers to control the infrared beams,
please consider to buy some button components to implmenent it._

# Components Implementation


# Source Code
This program send each infrared message by each 2 sec.  
Please modify it you want.  
```
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

```

## Appendix
### Commands
|Command Name|NEC 32bit Command|
|:-----------|------------:|
|Power on/off|0x017B00FF|
|Power off|0x017B30CF|
|Turn horizontally|0x017B50AF|
|Turn vertically|0x017B708F|
|Wind weaker|0x017B28D7|
|Wind stronger|0x017B6897|
|Wind mode: drying clothes|0x017B8877|
|Wind mode: continuously|0x017B906F|
|Wind mode: naturally |0x017BB04F|

