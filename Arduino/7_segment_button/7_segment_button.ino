#define PLUS 11
#define MINUS 12

  int digit = 0;
  
byte digits[10][7]=
{
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,0,0,1,1},
};


void setup () {
   pinMode (PLUS,INPUT);
   pinMode (MINUS, INPUT);
   for (int i=2; i<10;i++) {
   pinMode(i, OUTPUT);
  }
  digitalWrite(9,HIGH);
}

void loop () {
  if (digitalRead(PLUS) == HIGH) {
    ++digit;
      if ( digit > 9) {
        digit = 0;
      }
  }
  if ( digitalRead(MINUS) == HIGH ) {
        --digit;
        if(digit < 0){
          digit = 9;
        }
     }
    displayDigit(digit);
    delay(100);
}

void displayDigit (int num) {
  int pin = 2;
  for (int i=0;i<7;i++){
    digitalWrite(pin+i, digits[num][i]);
  }
}
