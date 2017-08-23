/*
 *  Hello World Gnome
 *
 *  This example is used to:
 *    1.- Open window to run in Gnome operating systems (ALT+F2)
 *    2.- Write text string "gedit" and run the program
 *    3.- Write text string Hello World in the program
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


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// CONFIG SECTION //////////////////////////////
////////////////////////////////////////////////////////////////////////////////


//#include <phukdlib_leonardo.h>
#include "Keyboard.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();

}

void loop() {
  delay(5000);
  CommandAtRunBarGnome("gedit");
  delay(2000);
  Keyboard.println("Hello World");
  delay(2000);
  while(1);
}

void CommandAtRunBarMSWIN(char *SomeCommand){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void CommandAtRunBarGnome(char *SomeCommand){
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print(SomeCommand);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

