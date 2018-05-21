#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  CommandAtRunBarOSX("terminal");
  delay(3000);
  Keyboard.println("osascript -e 'set volume 7'");
  delay(2000);
  Keyboard.println("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  while(1);
}
