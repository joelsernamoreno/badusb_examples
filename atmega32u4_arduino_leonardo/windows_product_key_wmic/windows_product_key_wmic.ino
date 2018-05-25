#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("cmd");
  delay(3000);
  Keyboard.println("wmic path softwarelicensingservice get OA3xOriginalProductKey>>productkey.txt");
  delay(2000);
  Keyboard.println("notepad productkey.txt");
  while(1);
}
