void setup() {
  Serial.begin(9600);
}

void loop() {
  int i;
  int j;
 for(i=1; i<10; i++){
    for(j=1; j<10; j++){
      Serial.print(i);
      Serial.print(" x ");
      Serial.print(j);
      Serial.print(" = ");
      Serial.println(i*j);
      delay(500);
    }
  } 
}
