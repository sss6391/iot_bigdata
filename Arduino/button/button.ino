#define LED 12
#define BUTTON 8

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
}

void loop() {
  int index;
  if (digitalRead(BUTTON)==HIGH){
     digitalWrite(LED,HIGH);
     delay(200);
     digitalWrite(LED,LOW); 
     delay(200);  
    
  }
}
