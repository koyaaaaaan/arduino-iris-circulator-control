日本語話者のかたには [README.ja.md](/README.ja.md) を用意してあります。  
If you are Japanese speaker, we have [README.ja.md](/README.ja.md) for you.

# Arduino Iris Circulator Control
This is for controling Iris Circulator with Arduino Infrared Remote Controll.  
  
_This is just a demonstration. Please use this on your responsibility._

### Target 
Circulator Model: PCF-SDC15T  
Manifacture: Iris Ohyama Japan  
EC Site(2021): https://www.irisplaza.co.jp/index.php?KB=SHOSAI&SID=H274315F  

### Components You need for implementation
* Arduino  
* Infrared LED (100 mA)  
* Jump Wires   
* Electrical Resistance (47 o-mu)  
  
_If you need some triggers to control the infrared beams,
please consider to buy some button components to implmenent it._

# Electric Circuit
![Electric Circuit](./circuit_en.png)

# Source Code
The sample program send each infrared message by each 2 sec.  
Please change the code what you want.
  
[Sample Code] [PCF-SDC15T/PCF-SDC15T.ino](PCF-SDC15T/PCF-SDC15T.ino)


## Appendix
### Commands
|Command Name|NEC 32bit Command|
|:-----------|------------:|
|Power on/off|0x017B00FF|
|Power off Timer (2h/4h/8h)|0x017B30CF|
|Turn horizontally (68/90/180)|0x017B50AF|
|Turn vertically|0x017B708F|
|Weaker|0x017B28D7|
|Stronger|0x017B6897|
|Wind mode: drying clothes|0x017B8877|
|Wind mode: continuously|0x017B906F|
|Wind mode: naturally |0x017BB04F|

Sending multiple command will be change the duration or digree for "Power off Timer" or "Turn horizontally" command.
