#include <Servo.h>

Servo myservo;

void setup(){
  myservo.attach(9);
}

void loop(){
 int i = map(analogRead(A0),0,1023,0,180);
 myservo.write(i);
 delay(15);
}
