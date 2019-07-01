#include "pitches.h"
#define RED 11
#define GREEN 10
#define BLUE 9
#define BUTTON4 4
#define BUTTON3 3
#define BUTTON2 2
int speakerPin = 8;
  
int tempo = 300;

char notes[] = "ccggaag ffeeddc ggffeed ggffeed ccggaag ffeeddc "; // a space represents a rest
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };

//Jingle Bells
char notes2[] = "eeeeeeegcde fffffeeeeddedg";
int beats2[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

void playTone2(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}
void playNote2(char note, int duration) {
  
char names[] = { 'c', 'd', 'e', 'f', 's', 'g', 'a', 'v', 'b', 'C', 'D', 'E' };
int tones[] = { 1915, 1700, 1519, 1432, 1352, 1275, 1136, 1073, 1014, 956, 852, 758 };
 
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone2(tones[i], duration);
   }
 }
}

void setup() {
  pinMode(speakerPin, OUTPUT);
  randomSeed(analogRead(0));
}
 
void loop() {
  if(digitalRead (BUTTON4) ==HIGH){
  for (int i = 0; i < 15; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
    } else {
      playNote2(notes[i], beats[i] * tempo);
    }
    // pause between notes
    delay(tempo / 2);
    analogWrite(RED,random(255));
    analogWrite(GREEN,random(255));
    analogWrite(BLUE,random(255));
    delay(tempo / 5);

    if(digitalRead (BUTTON2) == HIGH){
     break;
      }
    }
  }

  if(digitalRead (BUTTON3) == HIGH){
    for (int i = 0; i < 26; i++) {
      if (notes2[i] == ' ') {
        delay(beats2[i] * tempo); // rest
      } else {
        playNote2(notes2[i], beats2[i] * tempo);
      }
  analogWrite(RED,random(255));
  analogWrite(GREEN,random(255));
  analogWrite(BLUE,random(255));
  delay(tempo / 5);
 
    if(digitalRead (BUTTON2) ==HIGH){
    break;
    }
  }
 }
  analogWrite(RED,0);
  analogWrite(GREEN,0);
  analogWrite(BLUE,0);
}
