// Laser Light Show
// Sabrina Bagley's Modification of Zane Cochran's Code
// 27 March 2022

boolean isBroadcast = false;       // Toggles Visualization On/Off
String ipAddress = "10.40.4.115";  // Event Horizon IP Address

void setup(){
  size(480,480);
  initBroadcast();
  initAudio();
}

void draw(){
  background(0);
  getLoud();
  //getWave();
  colorMode(HSB, 255);
  stroke(0, 255, 255);
  line(random(width), random(height), soundSize, soundSize );
  
  stroke(50, 255, 255);
  strokeWeight(soundSize);
  line(random(width), random(height), soundSize, soundSize );
  
  stroke(87, 255, 255);
  line(random(width), random(height), soundSize, soundSize );
  
  stroke(128, 255, 255);
  
  line(random(width), random(height), soundSize, soundSize );
  
  if(isBroadcast){broadcast();}
}
