#include <stdio.h>
//declaring some constant values
#define row 8
#define column 8
int main(){

    //declaring variables before using
    double i;
    int choice;

    printf(" A B[C][D] E F G H \n");  //will be used as labels
    printf("\n"); //adding new line before the matrix

    // initializing the values of the array and setting the number of rows and columns to 8
    double road_networks[row][column] = {
        {1, 1, 0, 0, 0, 1},
        {1, 1, 1},
        {0, 1, 1, 0, 1, 1},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 1, 1},
        {1, 0, 1, 0, 0, 1},
        {1, 0, 0, 1, 0, 0, 1},
        {0, 0, 0, 0, 0, 1, 0, 1},
    };

    // looping through each rows and printing the values
    for (int rows = 0 ; rows < row ; rows++){
        printf(" ",rows);
        i = 0;

        // looping through each column and printing the values
        for (int col = 0 ;col < column ; col++){
            printf("%.0f ", road_networks[rows][col]);
        }
        printf("\n"); // printing new line
    }

    // guide for user's point/location
    printf("\nWhich point are you located?  0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H ");
    printf("\n");
    scanf("%d", &choice); //value entered by the user will be stored at variable choice

    // for showing the information after they've input their location
    // for users to know the point of charging stations
    if(choice == 0){
        printf("At point: A \n");
        printf("point: C arrived to charging station");
    } else if(choice == 1){
        printf("At point: B \n");
        printf("point: C arrived to charging station");
    } else if(choice == 2){
        printf("point: C is a charging station");
    } else if(choice == 3){
        printf("point: D is a charging station");
    } else if(choice == 4){
        printf("At point: E \n");
        printf("point: D arrived to charging station");
    } else if(choice == 5){
        printf("At point: F \n");
        printf("point: C arrived to charging station");
    } else if(choice == 6){
        printf("At point: G \n");
        printf("point: D arrived to charging station");
    }else{
        printf("At point: H \n");
        printf("point: C arrived to charging station");
    }

    return 0;
}
