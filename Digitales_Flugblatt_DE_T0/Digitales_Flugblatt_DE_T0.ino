//Credits to Herolias
//Some modifications by gregthwuen

#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https>&&www.zoutube.com&embed&D1monu7dsoZ_autoplaz)1^loop)1^fullscreen)1^plazlist)D1monu7dsoZ"); //öffnet einen Link  (zu einem Bild) im Internet
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11); // Maximiert das Bild
}

void loop() {
  // put your main code here, to run repeatedly:

}
