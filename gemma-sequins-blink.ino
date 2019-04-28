/*

Button
Turns on an two sets of LEDs attached to one GEMMA

This example code is in the public domain.

To upload to your Gemma or Trinket:
1) Select the proper board from the Tools->Board Menu
2) Select USBtinyISP from the Tools->Programmer
3) Plug in the Gemma/Trinket, make sure you see the green LED lit
4) For windows, install the USBtiny drivers
5) Press the button on the Gemma/Trinket - verify you see
the red LED pulse. This means it is ready to receive data
6) Click the upload button above within 10 seconds

*/

// define top and bottom leds
#define LEDTOP 0
#define LEDBOTTOM 2 

// define variables for settings
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int counter = 0;       // counter to keep track of cycles

// the setup routine runs once when you press reset:
void setup() {

  // initialize the LED pin as an output.
  pinMode(LEDBOTTOM, OUTPUT);
  pinMode(LEDTOP, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of the analog-connected LEDs:
  analogWrite(0, brightness);
  
  digitalWrite(LEDTOP, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  
  digitalWrite(LEDTOP, LOW); // turn the LED off by making the voltage LOW
  delay(1000);
   
  digitalWrite(LEDBOTTOM, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  
  digitalWrite(LEDBOTTOM, LOW); // turn the LED off by making the voltage LOW
  delay(1000); 

}
