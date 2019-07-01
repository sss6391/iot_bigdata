import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;

Arduino arduino;
int ledPin = 9;

void setup(){
 size(400, 400);
 for(int i=0; i <width; i++){
   stroke(map(i, 0, width-1, 0, 255));
   line(i, 0, i, height);
 }
 
 println(Arduino.list());
 arduino = new Arduino(this, Arduino.list()[0], 57600); 
}

void draw(){
 }
 
void mouseDragged(){
  arduino.analogWrite(ledPin, int(map(mouseX, 0, width-1, 0, 255)));
}
