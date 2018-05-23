#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("iexplore -k http://fakeupdate.net/win7/index.html");
  delay(5000);
  Keyboard.press(KEY_F11);
  delay(100);
  Keyboard.releaseAll();
  while(1);
}
