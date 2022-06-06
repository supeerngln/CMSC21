#include <stdio.h>
#include <math.h>

//making a structure
struct point
{
    float x;
    float y;
};

//another stucture for line
struct line
{
    struct point in;
    struct point out;
};

//function declarations
struct point solveMidpoint(struct line);
float solveDistance(struct line);
float solveSlope(struct line);
float solveInterceptForm(struct line);

int main() //main porogram
{
    struct point a; //naming the structure point as a
    struct line solv; //naming the structure line as solv
    float dist, slp, inForm, slope;  //declaring variables

    //getting input from the user for line 1 and point 1
    printf("Enter x coordinate of starting point: ");
    scanf("%f", &solv.in.x);
    printf("Enter y coordinate of starting point: ");
    scanf("%f", &solv.in.y);
    printf("Enter x coordinate of ending point: ");
    scanf("%f", &solv.out.x);
    printf("Enter y coordinate of ending point: ");
    scanf("%f", &solv.out.y);


    slp = solveSlope(solv); //storing a function to a variable
    printf("\nSLOPE: (%.2f - %.2f) / (%.2f - %.2f) = %.2f\n", //printing values of the slope
           solv.out.y, solv.in.y, solv.out.x, solv.in.x, slp);

    a = solveMidpoint(solv); //storing a function to a variable
    printf("\nMIDPOINT: ((%.2f + %.2f) / 2) = %.2f \n ((%.2f + %.2f) / 2) = %.2f\n",  //printing values of the midpoint
        solv.in.x, solv.out.x, a.x, solv.in.y, solv.out.y, a.y);


    dist = solveDistance(solv); //storing a function to a variable
    printf("\nDISTANCE: square root of (%.2f - %.2f)^2 + (%.2f - %.2f)^2 = %.2f\n",  //printing values of the distance
        solv.in.x, solv.out.x, solv.in.y, solv.out.y, dist);

    inForm = solveInterceptForm(solv); //storing a function to a variable
    slope = solveSlope(solv); // calling function to display in the equation
    printf("\nINTERCEPT FORM: %.2f = %.2f + %.2f\n",  //printing values of the slope intercept form
           solv.in.y, slope, inForm);

    return 0; //program termination or end of the main program
}

//function to get the slope of the line
float solveSlope(struct line solv)
{
    float slope = (solv.out.y - solv.in.y) / (solv.out.x - solv.in.x); //y2 - y1 / x2 - x1

    return slope;
}

//function to get the midpoint of the line
struct point solveMidpoint(struct line solv)
{
    struct point ans;
    ans.x = (solv.in.x + solv.out.x) / 2.0; // x1 + x2 / 2
    ans.y = (solv.in.y + solv.out.y) / 2.0; // y1 + y2 / 2

    return ans;
}

//function to get the distance of the line
float solveDistance(struct line solv)
{
    float dist = sqrt((solv.in.x - solv.out.x) * (solv.in.x - //sqrt of(x1-x2)^2 + (y1-y2)^2
        solv.out.x) + (solv.in.y - solv.out.y) * (solv.in.y -
        solv.out.y));

    return dist;
}

//function to get the Slope Intercept Form of the line
float solveInterceptForm(struct line solv)
{
    float b = (solv.in.y - (((solv.out.y - solv.in.y) / (solv.out.x - solv.in.x)) * (solv.in.x))); // solving for b
    return  b;
}
