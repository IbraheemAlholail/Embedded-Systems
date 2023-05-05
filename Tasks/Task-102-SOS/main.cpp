// You need this to use the Module Support Board
#include "uop_msb.h"
#include <chrono>
#include <ratio>
using namespace uop_msb;

#define WAIT_TIME_MS 500
DigitalOut greenLED(TRAF_GRN1_PIN);
Buzzer buzz;
Buttons buttons;
LCD_16X2_DISPLAY lcd;

// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)

int main() {
  lcd.puts("ready");
  bool said = false;
  lcd.cls();
  while (buttons.BlueButton == 0)
    ;

  while (buttons.BlueButton == 1) {
    if (!said) {
      lcd.puts("Nat Smells Bad");
      said = true;
    }

    
    buzz.playTone("E");
    wait_us(WAIT_TIME_MS * 1000);
    buzz.rest();
  
  }
}