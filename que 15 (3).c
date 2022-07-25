#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n==0)
        printf("%d is zero.", n);
    else if(n>0)
        printf("%d is a positive number.", n);
    else
        printf("%d is a negative number.", n);

    return 0;
}
