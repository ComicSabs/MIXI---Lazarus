void effects(){
  buttons[1].update();
  if (buttons[1].rose()){
    effectState[1]=!effectState[1];
    if(effectState[1]){
      controlChange(3, 1, 127);
    }
    else{
      controlChange(3, 1, 0);
    }
  }
  buttons[2].update();
  if (buttons[2].rose()){
    effectState[2]=!effectState[2];
    if(effectState[2]){
      controlChange(3, 2, 127);
      
    }
    else{
      controlChange(3, 2, 0);
    }
  }
    buttons[3].update();
    if (buttons[3].rose()){
    effectState[3]=!effectState[3];
    if(effectState[3]){
      controlChange(3, 3, 127);
      
    }
    else{
      controlChange(3, 3, 0);
    }
  }
    if (buttons[4].rose()){
    effectState[4]=!effectState[4];
    if(effectState[4]){
      controlChange(3, 4, 127);
      
    }
    else{
      controlChange(3, 4, 0);
    }
  }
    if (buttons[5].rose()){
    effectState[5]=!effectState[5];
    if(effectState[5]){
      controlChange(3, 5, 127);
      
    }
    else{
      controlChange(3, 5, 0);
    }
  }
    if (buttons[6].rose()){
    effectState[6]=!effectState[6];
    if(effectState[6]){
      controlChange(3, 6, 127);
      
    }
    else{
      controlChange(3, 6, 0);
    }
  }
}
