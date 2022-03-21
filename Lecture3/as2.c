#include <stdio.h>  // accessing the main library

int main(void)  // main function to start the program
{
    int first, second;  // declaration of int variables

    printf("Enter a two-digit number: ");  // guide for the user for their input
    scanf("%1d%1d", &first, &second);  // user can input their answers

    // word for the first digit
    switch (first)
    {
        case 1:
            // printing for special case numbers 11-19
            // return 0 was used to terminate the program after the special case numbers
            switch (second)
            {
                case 0:
                    printf("ten");
                    return 0;
                case 1:
                    printf("eleven");
                    return 0;
                case 2:
                    printf("twelve");
                    return 0;
                case 3:
                    printf("thirteen");
                    return 0;
                case 4:
                    printf("fourteen");
                    return 0;
                case 5:
                    printf("fifteen");
                    return 0;
                case 6:
                    printf("sixteen");
                    return 0;
                case 7:
                    printf("seventeen");
                    return 0;
                case 8:
                    printf("eigthteen");
                    return 0;
                case 9:
                    printf("nineteen");
                    return 0;
            }
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
    }

    // word for the second digit
    // break was used for it to continue to the second switch case statements
    switch (second)
    {
        case 1:
            printf("-one");
            break;
        case 2:
            printf("-two");
            break;
        case 3:
            printf("-three");
            break;
        case 4:
            printf("-four");
            break;
        case 5:
            printf("-five");
            break;
        case 6:
            printf("-six");
            break;
        case 7:
            printf("-seven");
            break;
        case 8:
            printf("-eight");
            break;
        case 9:
            printf("-nine");
            break;
    }

    return 0;  // program termination
}
