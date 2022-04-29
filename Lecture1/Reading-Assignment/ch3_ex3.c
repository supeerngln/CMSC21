/* Computes the dimensional weight of a 12 11 x 10 11 x a II box */

#include <stdio.h> /*including the <stdio.h> to call the C's standard library to make the program perform input and output operations*/

int main (void) /*the main function is automatically called when the code is running*/
{
int height, length, width, volume, weight; //declaring the variables that needs to be used in the program
height = 8;  // each variables will have a values through assignments
length= 12;
width= 10;
volume = height* length* width; // this is the formula to get the volume
                                // the variables are used and assigned to another variable named volume
weight= (volume+ 165) / 166;  // the formula for weight
                                // the value that we get from the variable volume is used to get the weight by adding 165 to it and dividing to 166


printf("Dimensions: %dx%dx%d\n", length, width, height);  //%dx and %d will tell the printf that it will print an integer
                                                            //the values of length, width and height will be assigned to the Dimension value
printf("Volume (cubic inches): %d\n", volume); // the value of the volume will be assigned to te Volume /cubic inches/
printf ( "Dimensional weight (pounds) : %d\n", weight) ;  // the value of the weight will be in the Dimensional weight
                                                        // this will serve as a guide for better understanding in the numbers given
return 0; /*the return 0 is required by the main function for the program to perform accordingly*/
}
