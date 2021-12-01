#include <avr/io.h>
#include"CLASSROOM.h"
#include"CLASSROOM1.h"
#include"CLASSROOM2.h"
#include<util/delay.h>
int main(void)
{
    LCD_INITIALIZATION();
    while(1)
    {
        CLASSROOM(); //Activity 1
        CLASSROOM1(); //Activity 2
        CLASSROOM2(); //Activity 3
    }
  return 0;
}