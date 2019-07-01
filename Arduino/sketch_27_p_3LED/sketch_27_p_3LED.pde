import processing.serial.*;
import cc.arduino.*;

Arduino arduino;
int r=0, g=0, b=0, redPin = 11, greenPin = 10, bluePin = 9;

void setup(){
  size(400,400);
  background(r, g, b);
  
  arduino = new Arduino(this, "COM5", 57600); 
}

void draw(){
 if(keyPressed){
  switch(key){
    case 'r':
    ++r;
    if(r>255){
      r=0;
    }break;
    case 'g':
    ++g;
    if(g>255){
      g=0;
    }break;
    case 'b':
    ++b;
    if(b>255){
     b=0; 
    }break;
    case 'c':
    r=g=b=0;
    break;
 }
 arduino.analogWrite(redPin, r);
 arduino.analogWrite(greenPin, g);
 arduino.analogWrite(bluePin, b);
 background(r,g,b);
 }
  delay(10);
}
