#define TRIG 3
#define ECHO 4

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long distance = pulseIn(ECHO, HIGH)/58.2;

   Serial.println(distance);
   delay(100);
}
