#include <Arduino.h>

int buzzer = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void playNote(int frequency, int duration) {
  tone(buzzer, frequency, duration);
  delay(duration);
  noTone(buzzer);
}

void loop() {
  // put your main code here, to run repeatedly:
  playNote(392, 500); // Sol4
  delay(100);
  playNote(440, 500); // La4
  delay(100);
  playNote(349, 500); //Fa4
  delay(100);
  playNote(175, 500); //Fa3
  delay(100);
  playNote(261, 500); //Do4
  delay(1000); //Pause avant de recommencer
}


