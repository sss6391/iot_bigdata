#define RED 11
#define GREEN 10
#define BLUE 9
#define R_BUTTON 4
#define G_BUTTON 3
#define B_BUTTON 2

int r=0, g=0, b=0;

void setup() {
  pinMode(R_BUTTON, INPUT);
  pinMode(G_BUTTON, INPUT);
  pinMode(B_BUTTON, INPUT);
}

void loop() {
  if(digitalRead(G_BUTTON) == HIGH){
    g++;
    if(g>255){
      g=0;
    }
  }
   if(digitalRead(R_BUTTON) == HIGH){
    r++;
    if(r>255){
      r=0;
    }
  }
   if(digitalRead(B_BUTTON) == HIGH){
    b++;
    if(b>255){
      b=0;
    }
  }
  analogWrite(RED, r);
  analogWrite(GREEN, g);
  analogWrite(BLUE, b);
  delay(10);
}
