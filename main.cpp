#include "mbed.h"
// Question 5 CA Embeeded systems. Everytime the button PC13 is pressed print the message button pressed 

DigitalIn button1(PC_13);
int pressCount = 0; 
int main()
{
    while (1){
    if (!button1) {
    pressCount ++ ; 
    printf ("Button 1 is pressed! Total presses: %d/n", pressCount);
    }

    {

    }
}

}