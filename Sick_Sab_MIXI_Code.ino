
// Sabrina Bagley
//CRT 360, Zane Cochran
//3/26/2022
//MIXI - MIDI Mixer

// Buttons
#include <Bounce2.h>
int numButtons = 8;
int buttonPins[8] = {1, 2, 3, 4, 5, 6, 7, 8};
Bounce * buttons = new Bounce[8];
boolean buttonStates[8] = {false, false, false, false, false, false, false, false};

//drums
boolean drumState[6] = {false,false, false, false, false, false};

//tones 
boolean toneState[6] = {false, false, false, false, false, false};

//effects
boolean effectState[6] = {false, false, false, false, false, false};


// LEDs
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(8, 10, NEO_RGB + NEO_KHZ800);
int numLED = 8;

// Potentiometers
int numPots = 4;
int potPins[4] = {0, 1, 2, 3};
int potStates[4] = {0, 0, 0, 0};

//Thresholding
int thresh = 50;
int curVal = analogRead(potPins[3]);
int pastVals[4]={0, 0, 0, 0};

//Switch Cases
int switchVal=0;

//Starter animation
int brightIndex=0;
boolean isIncreasing = true;
int brightness = 0;
uint32_t green = strip.Color(128, 255, 102);

//timer
unsigned long startTime = millis();
unsigned long endTime;
long interval = 500;


// MIDI
#include "MIDIUSB.h"

void setup() {
  Serial.begin(9600);
  initButtons();
  initLED();
  testAnimation();
  strip.clear();
}

void loop() {


switch (switchVal){
  
 case 0:
 
 drums();
 
 for (int i = 5; i < numLED; i++){
    strip.setPixelColor(i, 0, 0, 255);
 }
    for(int i = 0; i < numLED; i++){
      strip.setPixelColor(i, 0, 0, 255);
    }
  
 strip.show();
   strip.setPixelColor(3, 255, 0, 0);
  strip.setPixelColor(4, 255, 255, 0);
  strip.show();
 break;

 case 1:

  tones();
 
 for (int i = 5; i < numLED; i++){
    strip.setPixelColor(i, 0, 75, 75);
 }
    for(int i = 0; i < numLED; i++){
      strip.setPixelColor(i, 0, 75, 75);
    }
  
 strip.show();
   strip.setPixelColor(3, 255,0, 0);
  strip.setPixelColor(4, 255, 0, 255);
  strip.show();

 break;

 case 2:

effects();

 for (int i = 5; i < numLED; i++){
    strip.setPixelColor(i, 75, 0, 0);
 }
    for(int i = 0; i < numLED; i++){
      strip.setPixelColor(i, 75, 0, 0);
    }
  
 strip.show();
   strip.setPixelColor(3, 0, 0, 255);
  strip.setPixelColor(4, 255, 0, 75);
  strip.show();

 break;
}
 
  checkButtons();
  checkPots();
  
  testAll();
}
