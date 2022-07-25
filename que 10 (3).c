#include<stdio.h>
#include<conio.h>

int main()
{
    float cp, sp, p, l, pr, lo;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    p = sp - cp;
    l = cp - sp;
    pr = (p/cp) * 100;
    lo = (l/cp) * 100;
    if(sp > cp)
        printf("The profit percentage is: %f", pr);
    else
        printf("The loss percentage is: %d", lo);

    return 0;
}
