#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main(){

    /*

    A boolean array that contains true/false values referring to
    whether a certain pathway is open/close for transportation.

    Only pathways @ and 3 are open for transportation. The rest are close.

    */
    bool pathway[8] = {true, false ,true};
    // only pathways 0 and 2 are needed to be true, pathway 1 was initialized as false
    // the rest will be automatically false

    for (int i = 0; i < NUM_PATHWAYS; i++){

        /*

        Display the status of each pathway.

        Remember that pathway is type bool so its elements are either true/false - 1/0.

        */

        if (pathway[i]){
            printf("pathway[%d] is open \n", i);
        }else{
            printf("pathway[%d] is close \n", i);
        }
    }

    return 0;
}
