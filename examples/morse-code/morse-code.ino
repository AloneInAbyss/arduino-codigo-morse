#include <Morse.h>

// Instacia o objeto a partir da classe Morse
// Morse(int pinLED, int intervalo)
Morse morse(LED_BUILTIN, 250);

void setup() {
  // Escreve um PONTO
  morse.dot();

  // Escreve um TRAÇO
  morse.dash();

  // Intervalo para uma NOVA LETRA
  morse.newLetter();

  // Intervalo para uma NOVA PALAVRA
  morse.newWord();
}

void loop() {
  // Pedido de SOS
  morse.dot();morse.dot();morse.dot();
  morse.newLetter();

  morse.dash();morse.dash();morse.dash();
  morse.newLetter();

  morse.dot();morse.dot();morse.dot();
  morse.newWord();
}
