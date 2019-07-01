# define DELAY_TIME 100

void setup() {
  for(int i = 2; i<7; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int i;
  for(i = 2; i< 7; i++){
   blinkLED(i, DELAY_TIME);
   }
   for(i=6; i>1; i--){
   blinkLED(i, DELAY_TIME);
   }
}

void blinkLED(int pin, int delayTime){
  digitalWrite(pin, HIGH);
  delay(delayTime);
  digitalWrite(pin, LOW);
}
