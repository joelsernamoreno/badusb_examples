#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  delay(2000);
  DigiKeyboard.println("powershell");
  delay(2000);
  DigiKeyboard.println("Add-Type -AssemblyName System.speech");
  delay(2000);
  DigiKeyboard.println("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  delay(2000);
  DigiKeyboard.println("$speak.Speak(\"Esto es una prueba\")");
  delay(2000);
  DigiKeyboard.println("exit");
  while(1);
}
