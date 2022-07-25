#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    if(a>b && a>c)
        printf("%d is greater than %d and %d", a, b, c);
    else if(a<b && b>c)
        printf("%d is greater than %d and %d", b, a, c);
    else if(c>a && c>b)
        printf("%d is greater than %d and %d", c, a, b);
    else if((a=b>c) || (a=c>b))
        printf("%d", a);
    else if(b=c>a)
        printf("%d", b);
    else if(a=b=c)
        printf("%d", a);

    return 0;
}
