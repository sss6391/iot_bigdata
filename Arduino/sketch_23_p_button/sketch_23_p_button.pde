import cc.arduino.*;
import processing.serial.*;

Arduino arduino;
int button = 8, pState = Arduino.LOW;

void setup(){
 size(400, 400);
 background(255);
 randomSeed(second());
 
 arduino = new Arduino(this, "COM5", 57600); 
 arduino.pinMode(button, Arduino.INPUT);
}

void draw(){
  int state = arduino.digitalRead(button);
  println(state);
  if(pState == Arduino.LOW && state == Arduino.HIGH){

  float radius = random(50, 300);
  fill(random(0,255), random(0,255), random(0,255), 20);
  ellipse(mouseX, mouseY, radius, radius);
  }
  pState = state;
}
