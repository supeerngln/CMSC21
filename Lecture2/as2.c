//Reverse of a 2 digit number
#include <stdio.h>  // accessing the main library

int main(void) // main function to start the execution of the program
{
    int number, reversed;  // declaring the variables in the program

    reversed = 0; // initializing the value of the reversed to 0

    printf("Enter a 3-digit number: "); // printing a message for the user
    scanf("%d", &number); // user can input numbers to make it reversed

    while(number != 0){ // while the number is not equal to 0, the equations will
                       // continiously execute
    // for example, the number is 25
     reversed *= 10;  // reversed = 0 x 10 = 0
     reversed += number%10; // reversed = 0 + 25%10 = 5
     number /= 10; // to remove the last digit of the number given by the user
                  // it will continiously execute until the number is already equal to 0
    }
    // we already got 5 as our first digit
    // our number now is 2
    // reversed = 0 x 10 = 0
    // reversed = 0 + 2%10 = 2
    // number is now 0
    printf("The reverse of the number is %d:", reversed);  // statement to show the reversed of the number
    return 0;  // termination and shows the success of the code
}
