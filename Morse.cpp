/*
  Morse.cpp - Biblioteca para Código Morse
  Criado por Thiago Assi, 24 de janeiro de 2020
  Disponível no GitHub:
  https://github.com/AloneInAbyss/arduino-codigo-morse
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pinLED, int intervalo=250)
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

void Morse::sos() {
  this->dot();this->dot();this->dot();
  this->newLetter();

  this->dash();this->dash();this->dash();
  this->newLetter();

  this->dot();this->dot();this->dot();
  this->newWord();
}

void Morse::wait(int time) {
  delay(_intervalo*time);
}

// Recebe uma frase inteira
void Morse::text(String text) {
  // Inicia com uma nova palavra
  this->newWord();

  for (int i = 0; i < text.length(); i++) {
    // Identifica a letra atual
    switch(text[i]) {
      case ' ':
        this->newWord();
        break;
      
      case 'A':
      case 'a':
        this->dot();this->dash();
        break;
      
      case 'B':
      case 'b':
        this->dash();this->dot();this->dot();this->dot();
        break;
      
      case 'C':
      case 'c':
        this->dash();this->dot();this->dash();this->dot();
        break;
      
      case 'D':
      case 'd':
        this->dash();this->dot();this->dot();
        break;
      
      case 'E':
      case 'e':
        this->dot();
        break;
      
      case 'F':
      case 'f':
        this->dot();this->dot();this->dash();this->dot();
        break;
      
      case 'G':
      case 'g':
        this->dash();this->dash();this->dot();
        break;
      
      case 'H':
      case 'h':
        this->dot();this->dot();this->dot();this->dot();
        break;
      
      case 'I':
      case 'i':
        this->dot();this->dot();
        break;
      
      case 'J':
      case 'j':
        this->dot();this->dash();this->dash();this->dash();
        break;
      
      case 'K':
      case 'k':
        this->dash();this->dot();this->dash();
        break;
      
      case 'L':
      case 'l':
        this->dot();this->dash();this->dot();this->dot();
        break;
      
      case 'M':
      case 'm':
        this->dash();this->dash();
        break;
      
      case 'N':
      case 'n':
        this->dash();this->dot();
        break;
      
      case 'O':
      case 'o':
        this->dash();this->dash();this->dash();
        break;
      
      case 'P':
      case 'p':
        this->dot();this->dash();this->dash();this->dot();
        break;
      
      case 'Q':
      case 'q':
        this->dash();this->dash();this->dot();this->dash();
        break;
      
      case 'R':
      case 'r':
        this->dot();this->dash();this->dot();
        break;
        
      case 'S':
      case 's':
        this->dot();this->dot();this->dot();
        break;
      
      case 'T':
      case 't':
        this->dash();
        break;
      
      case 'U':
      case 'u':
        this->dot();this->dot();this->dash();
        break;
      
      case 'V':
      case 'v':
        this->dot();this->dot();this->dot();this->dash();
        break;
      
      case 'W':
      case 'w':
        this->dot();this->dash();this->dash();
        break;
      
      case 'X':
      case 'x':
        this->dash();this->dot();this->dot();this->dash();
        break;
      
      case 'Y':
      case 'y':
        this->dash();this->dot();this->dash();this->dash();
        break;
      
      case 'Z':
      case 'z':
        this->dash();this->dash();this->dot();this->dot();
        break;
    }
    
    // Identifica que há uma nova letra a frente
    if(i+1 < text.length() && text[i] != ' ') {
      this->newLetter();
    }
  }
}