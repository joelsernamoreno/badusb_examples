#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("photo booth");
  delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("terminal");
  delay(3000);
  DigiKeyboard.println("say You look ugly!");
  while(1);
}
