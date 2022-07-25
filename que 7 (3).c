#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a, b, c, r1, r2, p;
    printf("The quadratic equation is of the format ax^2 + bx + c = 0.\n");
    printf("Enter the value of a, b, c: ");
    scanf("%d, %d, %d", &a, &b, &c);
    p = (b*b) - (4*a*c);
    r1 = (-b+sqrt(p))/(2*a);
    r2 = (-b-sqrt(p))/(2*a);
    if(p > 0)
        if(r1 = r2)
            printf("%d and %d are real and equal roots.",r1 ,r2);
        else
            printf("%d and %d are real and distinct roots.",r1, r2);
    else
        printf("%d and %d are imaginary roots.",r1, r2);

    return 0;

}
