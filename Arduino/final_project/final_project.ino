#include <Servo.h>
#define SERVO 9
#define MODE1   '1'
#define MODE2   '2'
#define MODE3   '3'
#define MODE4   '4'
#define MODE5   '5'
#define BUTTON1  5
#define BUTTON2  6
#define led 7
#define led2 8
#define led3 11
#define led4 12
#define DELAY_TIME 15
#define TRIG 3
#define ECHO 4
#include <SoftwareSerial.h>
#define BT_RXD 2
#define BT_TXD 1
SoftwareSerial bluetooth(BT_RXD, BT_TXD);


Servo myservo;
int pos = 6 ;
int menu = 0;

void setup(){
  myservo.attach(SERVO);
  Serial.begin(9600);
 bluetooth.begin(9600);
  Serial.println("Welcome to IoT Simulation!");
  Serial.println("Son, Byung CHAN & Koo, bum jin  ver 1.0 CLOSE_BETA_TEST\n");
  myservo.write(pos);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
}

void mode1(){
  Serial.println("**OPEN**");
  bluetooth.write("**OPEN**");
   menu=0;
  if(pos>=180){
     Serial.println("caution: Door has already opened\n");
     bluetooth.write("caution: Door has already opened");
     return;
    }
     
   for (; pos< 180; pos+=1){
    tone(10, 30, 20);
    myservo.write(pos);
    delay(DELAY_TIME);
    Ledwave(pos);
  }
  Serial.println("Done!\n");
  bluetooth.write("Done!\n");
}

void mode2(){
  Serial.println("**CLOSE**");
  bluetooth.write("**CLOSE**");
   menu=0;
   
  if(pos <= 7){
     Serial.println("Caution: Door has already closed\n");
     bluetooth.write("caution: Door has already closed");
     return;
    }
  
   for (; pos > 7; pos-=1){
    tone(10, 70, 20);
    Ledwave(pos);
    myservo.write(pos);
    delay(DELAY_TIME);
  }
  
  Serial.println("Done!\n");
  bluetooth.write("Done!\n");
}


void mode3(){
  char command_mode=0;
  
  Serial.println("==AUTO MODE==");
  bluetooth.write("==AUTO MODE==");
  Serial.println("EXIT: 0");
  bluetooth.write("EXIT:0");
  menu=0;
  
while(command_mode != '0'){
  
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  long distance = pulseIn(ECHO, HIGH)/58;
  
 // Serial.println(distance);

  
  if (bluetooth.available()) {
    command_mode = bluetooth.read();
    Serial.write(bluetooth.read());  
  }
  
  if(Serial.available()){
    command_mode = Serial.read();
    Serial.println(command_mode);
    bluetooth.write(Serial.read());
  }
    
  if(distance < 15){
    if(pos<170){
    Serial.println("automatically OPEN");
    bluetooth.write("automatically OPEN");
    }
    for (; pos< 180; pos+=1){
     Ledwave(pos);
     digitalWrite(TRIG, LOW);
     delayMicroseconds(2);
     digitalWrite(TRIG, HIGH);
     delayMicroseconds(10);
     digitalWrite(TRIG, LOW);
  long distance = pulseIn(ECHO, HIGH)/58;
      if(distance > 100){
        break;
       }
    tone(10, 30, 20);
    myservo.write(pos);
    delay(DELAY_TIME-3);
    }
  }
  
  if(distance > 100){
    if(pos>8){
    Serial.println("automatically CLOSE");
    bluetooth.write("automatically CLOSE");
    }
    for (; pos > 7; pos-=1){
      Ledwave(pos);
     digitalWrite(TRIG, LOW);
     delayMicroseconds(2);
     digitalWrite(TRIG, HIGH);
     delayMicroseconds(10);
     digitalWrite(TRIG, LOW);
     long distance = pulseIn(ECHO, HIGH)/58;
      if(distance < 15){
        break;
       }
       
    tone(10, 60 , 20);
    myservo.write(pos);
    }
   }
  }
  Serial.println("EXIT AUTO MODE\n");
  bluetooth.write("EXIT AUTO MODE\n");
}

void mode4(){
  char command_mode=0;
  
  Serial.println("==MANUAL MODE==");
  bluetooth.write("==MANUAL MODE==");
  Serial.println("EXIT: 0");
  bluetooth.write("EXIT: 0");
  menu=0;

while(command_mode != '0'){
  int val = analogRead(A0);
  Ledwave(pos);
  
   if(Serial.available()){
   command_mode = Serial.read();
   Serial.println(command_mode);
  }
  pos = map(val, 0, 1024, 6, 179);
  
  myservo.write(pos);
  
  }
  if (bluetooth.available()) {
    Serial.write(bluetooth.read());
  }
  command_mode = bluetooth.read();
  if (Serial.available()) {
    bluetooth.write(Serial.read());
  }
  Serial.println("EXIT MANUAL MODE\n");
  bluetooth.write("EXIT MANUAL MODE");
}


void mode5(){
 char command_mode=0;
  
  Serial.println("== Button MODE ==");
  bluetooth.write("== Button MODE ==");
  Serial.println("EXIT: 0");
  bluetooth.write("EXIT: 0");
  menu=0;
while(command_mode != '0'){ 
  Ledwave(pos);
  
  if(digitalRead(BUTTON1) == HIGH && pos < 177){
     tone(10, 50, 20);
     pos++;
     myservo.write(pos);
     delay(DELAY_TIME);
     
  }
  
  if(digitalRead(BUTTON2) == HIGH && pos > 8){
     tone(10, 80, 20);
     pos--;
     myservo.write(pos);
     delay(DELAY_TIME);
  }
  if (bluetooth.available()) {
    command_mode = bluetooth.read();
    Serial.write(bluetooth.read());  
  }
  
  if(Serial.available()){
    command_mode = Serial.read();
    Serial.println(command_mode);
    bluetooth.write(Serial.read());
  }
  }
  Serial.println("EXIT BUTTON MODE\n");
  bluetooth.write("EXIT BUTTON MODE\n"); 
}


void Ledwave(int pos){
  if(pos>=170){
   digitalWrite(led,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
  }
  if(pos < 170 && pos >= 130){
   digitalWrite(led4,LOW);
   digitalWrite(led,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
  }
  if(pos<130 && pos>=95){
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led,HIGH);
   digitalWrite(led2,HIGH);
  }
  if(pos<95 && pos>=50){
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led,HIGH);
  }
  if(pos < 49){
    digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led,LOW);
   digitalWrite(led2,LOW);
  }
}

void loop(){
  char command_mode=0;
  
  if(menu == 0 ){
    Serial.println("========Please Select menu========"); 
    Serial.println("1. Open"); 
    Serial.println("2. Close");
    Serial.println("3. Auto Mode");
    Serial.println("4. Manual Mode");
    Serial.println("5. Button Mode");
    menu = 1;
  }
      
  if (bluetooth.available()) {
    command_mode = bluetooth.read();
    Serial.write(bluetooth.read());
  }

 if(Serial.available()){
    command_mode = Serial.read();
    Serial.println(command_mode);
   }
   
 switch (command_mode){
    case MODE1:
      mode1();
      break;
   case MODE2:
      mode2();
      break;
   case MODE3:
      mode3();
      break;
   case MODE4:
      mode4();
      break;
   case MODE5:
      mode5();
      break;
   }
}
