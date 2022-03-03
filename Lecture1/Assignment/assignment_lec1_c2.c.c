#include <stdio.h> // to access the C's main library
int main(void){ // // main function is where the code will start or execute

int minuend, subtrahend, result; // declaring variables before using
// variables will have its value through assignments
minuend = 87;
subtrahend = 15;
result = minuend-subtrahend;  // the difference of minuend and subtrahend will be stored in result variable

printf("When you subtract the value of 15 from 87, the answer is %d",result); // printing a statement with the answer to the
                                                                             // equation
return 0;  // program termination

}
