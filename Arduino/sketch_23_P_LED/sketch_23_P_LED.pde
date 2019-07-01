import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;

Arduino arduino;
int ledPin = 9;

void setup(){
 size(400, 400);
 background(0);
 fill(255);
 noStroke();
 rect(width/2, 0, width/2, height);
 
 println(Arduino.list());
 arduino = new Arduino(this, Arduino.list()[0], 57600);
 arduino.pinMode(ledPin,Arduino.OUTPUT);
}

void draw(){
 }
 
void mouseMoved(){
   if(mouseX<width/2){
    arduino.digitalWrite(ledPin, Arduino.LOW); 
   }else{
     arduino.digitalWrite(ledPin, Arduino.HIGH); 
   }
}
