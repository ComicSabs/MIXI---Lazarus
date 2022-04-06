void tones(){
  buttons[1].update();
  if (buttons[1].rose()){
    toneState[1]=!toneState[1];
    if(toneState[1]){
      controlChange(1, 1, 127);
    }
    else{
      controlChange(1, 1, 0);
    }
  }
  buttons[2].update();
  if (buttons[2].rose()){
    toneState[2]=!toneState[2];
    if(toneState[2]){
      controlChange(1, 2, 127);
      
    }
    else{
      controlChange(1, 2, 0);
    }
  }
    buttons[3].update();
    if (buttons[3].rose()){
    toneState[3]=!toneState[3];
    if(toneState[3]){
      controlChange(1, 3, 127);
      
    }
    else{
      controlChange(1, 3, 0);
    }
  }
    if (buttons[4].rose()){
    toneState[4]=!toneState[4];
    if(toneState[4]){
      controlChange(1, 4, 127);
      
    }
    else{
      controlChange(1, 4, 0);
    }
  }
    if (buttons[5].rose()){
    toneState[5]=!toneState[5];
    if(toneState[5]){
      controlChange(1, 5, 127);
      
    }
    else{
      controlChange(1, 5, 0);
    }
  }
    if (buttons[6].rose()){
    toneState[6]=!toneState[6];
    if(toneState[6]){
      controlChange(1, 6, 127);
      
    }
    else{
      controlChange(1, 6, 0);
    }
  }
}
