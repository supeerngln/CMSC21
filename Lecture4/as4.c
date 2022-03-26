#include <stdio.h>  //accesing the library
int main(void){ //where the program begins
    int i,a;  //declaring variables before using
    a=1; //setting the value of a to 1

    //giving the title and user's guide for the program
    printf("TABLE OF POWERS OF TWO \n");
    printf("\n  n \t 2 to the n ");
    printf("\n ---  \t ---------- ");

    for(i=0; i <= 10; i++){ //the loop will continously execute until the value of i is 10
        if (i == 0) // if the value of i is 0, the answer will be 1
            a = 1;
        else  //if not, the value of a will be multiplied by itself
            a *= 2;

        printf("\n  %d    \t     %d", i, a);  //printing the values of i with their power of 2
        }

return 0; //termination of the program

    }
