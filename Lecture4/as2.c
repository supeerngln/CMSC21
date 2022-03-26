#include <stdio.h>
int main(void){
    int i,j,k;
    //while loop
    i=1;
    while (i < 10){
    printf("%d \t", i);
    i++;
    }

    //for loop
    for(j=1; j < 10; j++){
        printf("\n%d\n",j);
    }

    //do-while loop
    k=1;
    do{
        printf("%d \t", k);
        k++;
    }while(k <10);

 return 0;
}
