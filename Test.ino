// Test Program

long testTimer = 0;
long testInterval = 50;
int testColor = 0;



void testAll(){
  // Test LEDs
//  if(millis() - testTimer > testInterval){
//  testColor = (testColor + 1) % 255; 
//  testTimer = millis();
//  }
//  for(int i = 0; i < numLED; i++){
//    strip.setPixelColor(i, Wheel(testColor));
//    } 
//    strip.show();
//  Serial.print(testColor); 
//  Serial.print("\t");

  // Test Buttons & Potentiometers
  for (int i=0; i < numButtons;i++){
//   Serial.print(buttonStates[i]);
//    Serial.print("\t");
  }
 
  for (int i = 0; i < numPots; i++){
 
    int curVal=analogRead(potPins[i]);
    int pastVal=pastVals[i];
    
  if(abs(curVal-pastVal)>=thresh){
  


Serial.print("potentiometer");
Serial.print(i);
Serial.print (":\t");
Serial.println(curVal);
  
  pastVals[i]=curVal;
  
  int outPot = map (curVal, 0, 1023, 0, 127);
  controlChange(0, i+10, outPot);
  
   }
  }
}
