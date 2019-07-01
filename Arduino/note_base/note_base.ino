int notes[] = {262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523};
char note_chars[] = {'a','w','s','e','d','f','t','g','y','h','u','j','k'};



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char note = Serial.read();
    for(int i = 0; i<13;i++){
      if(note == note_chars[i]){
        beep(i);
        break;
      }
    }
  }
}
void beep(int noteIndex){
  tone(8,notes[noteIndex], 50);
}
