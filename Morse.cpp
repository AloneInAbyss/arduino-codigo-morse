/*
  Morse.cpp - Biblioteca para Código Morse
  Criado por Thiago Assi, 24 de janeiro de 2020
  Disponível para o domínio público
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pinLED, int intervalo)
{
  pinMode(pinLED, OUTPUT);
  _pinLED = pinLED;
  _intervalo = intervalo;
}

void Morse::dot() {
  digitalWrite(_pinLED, HIGH);
  delay(_intervalo);
  digitalWrite(_pinLED, LOW);
  delay(_intervalo);
}

void Morse::dash() {
  digitalWrite(_pinLED, HIGH);
  delay(_intervalo*3);
  digitalWrite(_pinLED, LOW);
  delay(_intervalo);
}

void Morse::newLetter() {
  delay(_intervalo*3);
}

void Morse::newWord() {
  delay(_intervalo*7);
}