#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{
    uLCD.locate(5, 0);
      uLCD.printf("\nHello uLCD World\n"); //Default Green on black text
    //  uLCD.line(0, 0, 50, 0, BLACK));
   // uLCD.line(50, 0, 50, 50, BLACK);
    uLCD.line(100, 50, 0, 50, BLACK);   // x,y just like cooridinate plane
   // uLCD.line(0, 50, 0, 0, BLACK);
      uLCD.circle(64 , 64 , 64, BLACK); // total width and length are both 128
      uLCD.background_color(0xFFFFFF);  // white background
      wait(30);

}