#include "mbed.h"

#include "TextLCD.h"


DigitalOut led(LED_RED);

TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{

      int x=0;

      lcd.printf("106061245");

      while(true)

      {

            led = !led;             // toggle led           
            for(int i=30; i>=1; i--) {
                lcd.locate(10,0);
                lcd.printf("%5i",i);    //conuter display
                wait(1);
            }
      }

}