#include<stdio.h>
#include<conio.h>

int main()
{
    int n1, n2;
    printf("Enter the 1st number: ");
    scanf("%d", &n1);
    printf("Enter the 2nd number: ");
    scanf("%d", &n2);
    if(n1>n2)
        printf("%d is greater than %d.", n1, n2);
    else
         printf("%d is greater than %d.", n2, n1);

    return 0;
}
