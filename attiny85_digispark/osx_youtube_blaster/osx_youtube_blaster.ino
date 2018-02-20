#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("terminal");
  delay(3000);
  DigiKeyboard.println("osascript -e 'set volume 7'");
  delay(2000);
  DigiKeyboard.println("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  while(1);
}
