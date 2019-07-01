void setup() {
}

void loop() {
  int val = analogRead(A0);
  analogWrite(9, map(val, 0, 2023, 0, 255));
 }
