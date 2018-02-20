#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F2,MOD_ALT_LEFT);
  delay(3000);
  DigiKeyboard.println("gnome-terminal");
  delay(3000);
  DigiKeyboard.println("echo \"Development tools availability: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("which gcc >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("which g++ >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("which python >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo \"Print TCP/UDP Listening Services: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("netstat -tunlpe >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo \"Installed Packages: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("dpkg -l >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  while(1);
}
