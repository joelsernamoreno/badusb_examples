#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarOSX("photo booth");
  delay(3000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  CommandAtRunBarOSX("terminal");
  delay(3000);
  Keyboard.println("say You look ugly!");
  while(1);
}
