#include <stdio.h> // the program in order to run should include this to access the C's standard library
int main(void){  //including the main function since it will be automatically called when the program is executed
int i, j;  // declaring some variables in integer type
float x, y;  // declaring float type variables x and y

// the variables i, j, x and y has values equivalent to it through assignments
i = 10;
j = 20;
x = 43.2892f;
y = 5527.0f;
printf("i = %d, j = %d, x = %f, y = %f \n", i, j, x, y); //the %d is telling the program that it will print an integer
                                                         // the %f is telling the program that it will print a float number
                                                        // this means that the programmer print some messages to indicate the variables given and their values
return 0;  // return 0 is for the program's termination, it means that it is already done
}
