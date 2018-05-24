#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("cmd");
  delay(3000);
  Keyboard.println("echo @echo off>>example.bat");
  delay(2000);
  Keyboard.println("echo color 2a>>example.bat");
  delay(2000);
  Keyboard.println("echo mode con cols=50 lines=10>>example.bat");
  delay(2000);
  Keyboard.println("echo title Hello>>example.bat");
  delay(2000);
  Keyboard.println("echo echo Hello World>>example.bat");
  delay(2000);
  Keyboard.println("echo pause>>example.bat");
  delay(2000);
  Keyboard.println("example.bat");
  while(1);
}
