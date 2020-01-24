/*
  Morse.h - Biblioteca para Código Morse
  Criado por Thiago Assi, 24 de janeiro de 2020
  Disponível no GitHub:
  https://github.com/AloneInAbyss/arduino-codigo-morse
*/

#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pinLED, int intervalo);
    void dot();
    void dash();
    void newLetter();
    void newWord();

  private:
    int _pinLED, _intervalo;
};

#endif

