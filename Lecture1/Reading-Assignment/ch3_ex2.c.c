/* Prints int and float values in various formats */
#include <stdio.h> // the program in order to run should include this to access the C's standard library
int main(void) //including the main function since it will be automatically called when the program is executed
{
    int i; // declaring variable i in integer type
    float x;  // declaring float type variable x

    // the variables i and x has values equivalent to it through assignments

    i = 40;
    x = 839.21f;
    printf("| %d|%5d|%-5d|%5.3d|\n", i, i, i, i); // i displayed in decimal will be printed in different amount of space or position
                                                 // it will depend on the number given beside d, it is equivalent to a character
                                                // with 5.3 it has a 5 characters overall and 3 digits minimum, and if the value is negative, it will be left justified, if positive then it will be right justified

    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x); // f displayed in fixed decimal will be printed in different position or amount of space
                                            // e displayed in exponential form will be printed in different position or amount of space
                                            // g displayed in either fixed decimal or exponential form will be printed in different position or amount of space
                                            // it will depend on the number given beside f, it is equivalent to a character
                                            // example with 10.3, it has 10 characters overall and 3 digits minimum, and if the value is negative, it will be left justifies, if positive then it will be right justified
    return 0; // return 0 is for the program's termination, it means that it is already done
}
