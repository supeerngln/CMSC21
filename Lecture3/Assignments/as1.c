#include <stdio.h> //accessing main library

int main(void){  // program will happen in main program
    int age;  // declaring age as int variable

    printf("Enter age: "); // user's guide to input their age
    scanf("%d", &age);  // user can input their age and will be stored to variable age

    if ((age >= 13) && (age <= 19)) // if age is equal to 19 and not less than to 13, it will print true
        printf("Teenager? TRUE");
    else
        printf("Teenager? FALSE");  // if the age is not part of the range, it will print false

    return 0;  // program termination
 }

