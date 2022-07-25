#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%3==0 && n%7==0)
        printf("%d is divisible by both 3 and 7", n);
    else if(n%3==0)
            printf("%d is divisible by 3.", n);
    else if(n%7==0)
        printf("%d is divisible by 7.", n);
    else
        printf("%d is not divisible by both 3 and 7.", n);


    return 0;
}
