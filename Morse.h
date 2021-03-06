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
    Morse(int pinLED, int intervalo=250);
    void dot();
    void dash();
    void newLetter();
    void newWord();
    void text(String text);
    void sos();
    void wait(int time);

  private:
    int _pinLED, _intervalo;
};

#endif

