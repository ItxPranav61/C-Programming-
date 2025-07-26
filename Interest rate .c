#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,r,t,si;

    printf("ENTER PRINCIPLE AMMOUNT: \n");
    scanf("%f", &p);

    printf("ENTER RATE OF INTEREST: \n");
    scanf("%f", &r);

    printf("ENTER THE PERIOD OF TIME: \n");
    scanf("%f", &t);

    si = (p*r*t) / 100;

    printf("SIMPLE INTEREST = %.2f \n", si);

    return 0;
}
