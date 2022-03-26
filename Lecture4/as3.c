#include <stdio.h> //accessing main library
int main(void)  // where program begins
{
    int j; //declaring variable j as int
    for(j=1; j <= 128;){ //setting the value of j to 1 and will continiously execute until the value of j is equal to less than or equal to 128
        printf("%d ", j); // printing the values of j
        j *= 2; // j will be multiplied to 2
    }

     return 0; //termination of the program
}
