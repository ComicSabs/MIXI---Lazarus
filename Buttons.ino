// Button/Potontiometer Functions

// Initialize Buttons
void initButtons(){
  for (int i = 0; i < numButtons; i++) {
    buttons[i].attach(buttonPins[i], INPUT);
    buttons[i].interval(25);
  }
}

// Check Buttons
void checkButtons(){
  for (int i = 0; i < numButtons; i++)  {
    buttons[i].update();
    if (buttons[i].rose() ) {
      buttonStates[i] = !buttonStates[i];
    }
    }
      if (buttons[4].rose()){
        if(buttons[8].rose()){
      switchVal=switchVal+1;
     if ( switchVal>3){
        switchVal=0;
     }
      }
      }
      
    }
  


// Check Pots
void checkPots(){
  for (int i = 0; i < numPots; i++){
    potStates[i] = analogRead(potPins[i]);
  }
}
