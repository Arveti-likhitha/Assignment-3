#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("Enter all three sides of a triangle: ");
    scanf("%d, %d, %d", &a, &b, &c);
    if((a+b>c) && (b+c>a) && (a+c>b))
        printf("The entered sides form a triangle.");
    else
        printf("The entered sides do not form a triangle.");

    return 0;

}
