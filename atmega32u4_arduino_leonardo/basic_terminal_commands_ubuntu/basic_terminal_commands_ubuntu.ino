#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarGnome("gnome-terminal");
  delay(3000);
  Keyboard.println("pwd");
  delay(2000);
  Keyboard.println("id");
  delay(2000);
  Keyboard.println("cat /etc/passwd");
  delay(2000);
  while(1);
}
