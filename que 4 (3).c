#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if((n/2)*2 == n)
        printf("%d is an even number.", n);
    else
        printf("%d is an odd number.", n);

    return 0;
}
