#include <stdio.h>
int main(){ // main function
// declaring variables
// setting the value of row, column, and size as 0
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';

    // will execute as long as the size is less than or equal to 0
    while(size <= 0){
        printf("Enter square size:"); //user input for square size
        scanf("%d", &size);

        for(row = 0 ; row < size ; row++){ // initializing the row
            for(column = 0 ; column < size ; column++){ //initializing the columns
                if ( row == 0 || row == size-1 || column == 0 || column == size-1 ){
                    printf("*");
                }else{
                    printf(" ");
                    }
                }
            printf("\n");
        }
    }
    //will execute and ask the user if they want to continue printing
    printf("Print another square? Enter y or n: ");
    scanf(" %c", &cont);
    if (cont == 'n'){
        return 0;
        }
    else if (cont == 'x'){
        printf("Not a valid choice. \n");
        printf("Print another square? Enter y/n: ");
        scanf(" %c", &cont);
        }
    return 0;
}
