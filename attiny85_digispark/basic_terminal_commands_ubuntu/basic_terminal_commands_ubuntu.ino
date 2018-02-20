#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
delay(1000);
DigiKeyboard.sendKeyStroke(KEY_F2,MOD_ALT_LEFT);
delay(2000);
DigiKeyboard.println("gnome-terminal");
delay(3000);
DigiKeyboard.println("pwd");
delay(2000);
DigiKeyboard.println("id");
delay(2000);
DigiKeyboard.println("cat /etc/passwd");
delay(2000);
while(1);
}
