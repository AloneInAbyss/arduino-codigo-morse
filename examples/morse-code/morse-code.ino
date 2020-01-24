#include <Morse.h>

Morse morse(8, 250);

void setup() {
}

void loop() {
  morse.dot();morse.dot();morse.dot();
  morse.newLetter();
  morse.dash();morse.dash();morse.dash();
  morse.newLetter();
  morse.dot();morse.dot();morse.dot();
  morse.newWord();
}
