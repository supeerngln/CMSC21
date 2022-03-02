/* Adds two fractions */
#include <stdio.h> // the program in order to run should include this to access the C's standard library

int main(void){ //including the main function since it will be automatically called when the program is executed
    int num1, denom1, num2, denom2, result_num, result_denom;  // declaring some variables in integer type
    printf("Enter first fraction: ");  // printing a message to serve as a guide to ask the user to input the first fraction
    scanf("%d/ %d", &num1, &denom1);  // the program will ask the user to input values for the fraction
                                     // the %d tells the program that it will print an integer and the format will be for example, x/y

    printf("Enter second fraction: "); // printing a message to serve as a guide to ask the user to input the second fraction
    scanf ("%d/%d", &num2, &denom2); // the program will ask the user to input values for the fraction
                                    // the %d tells the program that it will print an integer and the format will be for example, a/b


    result_num = num1 * denom2 + num2 * denom1;  // the variables num1 and denom2 will be multiplied together and will be added to the product of num2 and denom1
                                                // and it will be stored to another variable, called result_num
    result_denom = denom1 * denom2;  // the product of denom1 and denom2 will be stored to variable result_denom
    printf ( "The sum is %d/%d\n", result_num, result_denom);  // the program will print a message and will show the values or the sum of both fractions,
                                                                // result_num is the numerator and result_denom is the denominator
    return 0;  // return 0 is for the program's termination, it means that it is already done
}
