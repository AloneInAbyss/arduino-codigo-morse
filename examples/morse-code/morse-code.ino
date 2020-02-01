#include <Morse.h>

// Instacia o objeto a partir da classe Morse
// Morse(int pinLED, [int intervalo])
Morse morse(LED_BUILTIN);

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
  // Espera 5x o tempo de intervalo
  morse.wait(5);

  // Pedido de SOS
  morse.dot();morse.dot();morse.dot();
  morse.newLetter();

  morse.dash();morse.dash();morse.dash();
  morse.newLetter();

  morse.dot();morse.dot();morse.dot();
  morse.newWord();

  // Espera 10x o tempo de intervalo
  morse.wait(10);
  // Função para o pedido de SOS
  morse.sos();

  // Espera 10x o tempo de intervalo
  morse.wait(10);
  // Função personalizada
  morse.text("SOS");
}
