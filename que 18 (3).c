#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the month number: ");
    scanf("%d", &n);
    if(n == 1)
        printf("Month number: %d has 31 days.", n);
    else if(n == 2)
        printf("Month number: %d has 28 or 29 days.", n);
    else if(n == 3)
        printf("Month number: %d has 31 days.", n);
    else if(n == 4)
        printf("Month number: %d has 30 days.", n);
    else if(n == 5)
        printf("Month number: %d has 31 days.", n);
    else if(n == 6)
        printf("Month number: %d has 30 days.", n);
    else if(n == 7)
        printf("Month number: %d has 31 days.", n);
    else if(n == 8)
        printf("Month number: %d has 31 days.", n);
    else if(n == 9)
        printf("Month number: %d has 30 days.", n);
    else if(n == 10)
        printf("Month number: %d has 31 days.", n);
    else if(n == 11)
        printf("Month number: %d has 30 days.", n);
    else if(n == 12)
        printf("Month number: %d has 31 days.", n);
     else
        printf("Please enter the month number between 1 - 12!");


    return 0;
}
