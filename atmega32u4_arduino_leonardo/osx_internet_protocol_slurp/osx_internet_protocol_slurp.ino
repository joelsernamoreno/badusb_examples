#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarOSX("terminal");
  delay(3000);
  Keyboard.println("ifconfig");
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('a');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('c');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('q');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("textedit");
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('a');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('v');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('q');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("default_config");
  while(1);
}
