#define DELAY_TIME 100


void setup(){
  int index ;
  for(index=2;index<7;index++){
  pinMode(index,OUTPUT);
  }
}

void loop(){
  int index;


  
  for(index=2;index<7;index++){
  digitalWrite(index,HIGH);
  delay(DELAY_TIME);
  digitalWrite(index,LOW);
  }
  
  index= index-1;
  for(;index>1;index--){
   digitalWrite(index,HIGH);
   delay(DELAY_TIME);
   digitalWrite(index,LOW);
  }

}
