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
  Keyboard.println("cmd");
  delay(3000);
  Keyboard.println("wmic bios get serialnumber>>information.txt");
  delay(3000);
  Keyboard.println("wmic computersystem get model>>information.txt");
  delay(7000);
  Keyboard.println("wmic product get name>>information.txt");
  delay(3000);
  Keyboard.println("notepad information.txt");
  while(1);
}
