// Código Morse
#include <Arduino.h>

const int pinLED = 8;
int intervalo = 250;
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
  delay(intervalo);
  digitalWrite(pinLED, LOW);
  delay(intervalo);
}

void dash() {
  digitalWrite(pinLED, HIGH);
  delay(intervalo*3);
  digitalWrite(pinLED, LOW);
  delay(intervalo);
}

void newLetter() {
  delay(intervalo*3);
}

void newWord() {
  delay(intervalo*7);
}