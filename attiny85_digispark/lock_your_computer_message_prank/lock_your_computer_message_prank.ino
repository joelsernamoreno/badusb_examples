#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("notepad.exe");
  delay(5000);
  DigiKeyboard.println("I will learn to lock my computer.");
  delay(1000);
  DigiKeyboard.println("I will learn to lock my computer.");
  delay(1000);
  DigiKeyboard.println("I will learn to lock my computer.");
  delay(1000);
  DigiKeyboard.println("I will learn to lock my computer.");
  delay(1000);
  DigiKeyboard.println("I will learn to lock my computer.");
  delay(1000);
  DigiKeyboard.println("I will learn to lock my computer.");
  delay(1000);
  DigiKeyboard.println("Please remember to lock your computer when you step away from your desk.");
  delay(1000);
  DigiKeyboard.println("Thank you.");
  delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_ALT_LEFT);
  DigiKeyboard.print("x");
  delay(3000);
}
