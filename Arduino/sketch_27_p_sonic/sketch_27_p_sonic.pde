import processing.serial.*;

Serial myPort;
int r;

void setup(){
 size(400,400);
 randomSeed(second());
 r = width;
 
 myPort = new Serial(this, "COM5", 9600); 
 myPort.bufferUntil('\n');
}

void draw(){
 background(255);
 fill(random(0,255), random(0,255), random(0,255));
 ellipse(width/2, height/2, r, r);
}

void serialEvent(Serial p){
 String response = p.readStringUntil('\n').trim();
 r = int(response);
 r = constrain(r, 10, width);
}
