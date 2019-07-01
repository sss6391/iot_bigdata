import cc.arduino.*;
import processing.serial.*;

Arduino arduino;

void setup(){
  size(400,400);
  noStroke();
  randomSeed(second());
  
  for(int i=0; i<20; i++){
    for(int j=0; j<20; j++){
      fill(random(0,255), random(0,255), random(0,255));
      rect(i*20, j*20, (i+1)*20, (j+1)*20);
    }
  }
  
   arduino = new Arduino(this, "COM5", 57600); 
}

void draw(){}

void mouseDragged(){
   color c = get(mouseX, mouseY);
   arduino.analogWrite(11, int(red(c)));
   arduino.analogWrite(10, int(green(c)));
   arduino.analogWrite(9, int(blue(c)));
}
