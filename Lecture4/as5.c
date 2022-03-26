#include <stdio.h> //acessing the main library
int main(){  //start of the main program
   int i,day,monthday,j=1;  // declaring variables as int

   printf("Enter number of days in a month: \n");  //user's guide to input number of days in a month
   scanf("%d",&monthday);  //answer will be stored in monthday

   printf("Enter the number for the first day of the month: \n"); //user's guide to input first day of the month
   printf("0.Sunday\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n");  //choices of answers
   scanf("%d",&day);  //answer will be stored in day

   for(i = day;i > 0;i-- ) //to have space before the user's input for "day"
    {                     // if the user entered 0, it means that there will be no space before it
        printf("\t");    // if 1, then there will be a space before it and so on
    }

    while(j <= monthday)  //will execute as long as j is less than or equal to monthday
    {
         if(day % 7 == 0){ // to make the calendar to have seven days per week
         printf("\n");    // every line will only have 7 spaces/numbers
        }

  printf("%d \t",j);  // will print the value of j starting from 1 until the user's input in monthday
        j++;  //incrementing values of j
        day++;  //incrementing values of day to execute the 7 numbers per line or per week in the calenday
    }
return 0;  //termination of the program
}
