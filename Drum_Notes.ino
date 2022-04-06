


void drums(){
  buttons[1].update();
  if (buttons[1].rose()){
    drumState[1]=!drumState[1];
    if(drumState[1]){
      controlChange(0, 1, 127);
    }
    else{
      controlChange(0, 1, 0);
    }
  }
  buttons[2].update();
  if (buttons[2].rose()){
    drumState[2]=!drumState[2];
    if(drumState[2]){
      controlChange(0, 2, 127);
      
    }
    else{
      controlChange(0, 2, 0);
    }
  }
    buttons[3].update();
    if (buttons[3].rose()){
    drumState[3]=!drumState[3];
    if(drumState[3]){
      controlChange(0, 3, 127);
      
    }
    else{
      controlChange(0, 3, 0);
    }
  }
    if (buttons[4].rose()){
    drumState[4]=!drumState[4];
    if(drumState[4]){
      controlChange(0, 4, 127);
      
    }
    else{
      controlChange(0, 4, 0);
    }
  }
    if (buttons[5].rose()){
    drumState[5]=!drumState[5];
    if(drumState[5]){
      controlChange(0, 5, 127);
      
    }
    else{
      controlChange(0, 5, 0);
    }
  }
    if (buttons[6].rose()){
    drumState[6]=!drumState[6];
    if(drumState[6]){
      controlChange(0, 6, 127);
      
    }
    else{
      controlChange(0, 6, 0);
    }
  }
}
