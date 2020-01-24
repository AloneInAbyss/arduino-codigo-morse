// Código Morse
#include <Arduino.h>

const int pinLED = 8;
void dot();
void dash();
void newLetter();
void newWord();

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  dot();dot();dot();
  newLetter();
  dash();dash();dash();
  newLetter();
  dot();dot();dot();
  newWord();
}

void dot() {
  digitalWrite(pinLED, HIGH);
  delay(250);
  digitalWrite(pinLED, LOW);
  delay(250);
}

void dash() {
  digitalWrite(pinLED, HIGH);
  delay(750);
  digitalWrite(pinLED, LOW);
  delay(250);
}

void newLetter() {
  delay(750);
}

void newWord() {
  delay(1750);
}