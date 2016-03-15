#include <stdio.h>
#include <stdlib.h>

/*
This program written in C, prompts the user to enter a
measure in inches, calls a conversion function, and
prints out the measurement in centimeters.
*/

//named constant
const float ONE_INCH = 2.54;

//prototypes
float get_inch   (float *inch);
float conversion (float inch);
float display    (float inch, float centi_converted);

int main(void)
{
    //variable declaration
    float inch = 0;
    float centi_converted = 0;

    //function calls
    get_inch (&inch);

    centi_converted = conversion(inch);

    display (inch, centi_converted);

    return 0;
}
//===================================================================
float get_inch (float *inch)
{
    printf("Please enter measure in inches: ");
    scanf("%f", inch);
    return 0;
}//get_inch

//===================================================================
float conversion (float inch)
{
    return inch * ONE_INCH;
}//conversion
//===================================================================
float display (float inch, float centi_converted)
{
    printf("==================================\n");
    printf("%.2f inches are %.2f centimeters\n", inch, centi_converted);
    printf("==================================\n");
    return centi_converted;
}//display
