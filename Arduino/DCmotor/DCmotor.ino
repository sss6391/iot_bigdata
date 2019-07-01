#define DCPIN1 5
#define DCPIN2 6
byte speedDC = 255;

void setup(){
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){
  analogWrite(5, map(analogRead(A0),0,1023,0,120));
  analogWrite(6, 0);
}
