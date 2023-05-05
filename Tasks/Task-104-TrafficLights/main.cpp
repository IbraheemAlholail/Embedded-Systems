#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 

DigitalOut red(TRAF_RED1_PIN,1);         //Note the initial state
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

LCD_16X2_DISPLAY lcd;

int main()
{
    lcd.puts("Nat Smells bad");
}
