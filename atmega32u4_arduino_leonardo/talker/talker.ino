#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell");
  delay(4000);
  Keyboard.println("Add-Type -AssemblyName System.speech");
  delay(2000);
  Keyboard.println("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  delay(2000);
  Keyboard.println("$speak.Speak(\"Esto es una prueba\")");
  delay(2000);
  Keyboard.println("exit");
  while(1);
}
