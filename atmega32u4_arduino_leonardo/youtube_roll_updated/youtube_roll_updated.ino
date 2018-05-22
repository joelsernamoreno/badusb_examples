#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  delay(5000);
}
