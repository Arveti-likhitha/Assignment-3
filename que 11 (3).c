#include<stdio.h>
#include<conio.h>

int main()
{
    int m1, m2, m3, m4, m5, avg;
    printf("Enter the marks of all 5 subjects: ");
    scanf("%d, %d, %d, %d, %d", &m1, &m2, &m3, &m4, &m5);
    avg = (m1 + m2 + m3 + m4 + m5)/500;
    if(avg>=33)
        printf("The student has passed the exam.");
    else
        printf("The student has failed the exam.");

    return 0;
}
