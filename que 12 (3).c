#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>=65 & ch<=90)
        printf("%c is an uppercase character.", ch);
    else if(ch>=97 & ch<=122)
        printf("%c is a lowercase character.", ch);
    else
        printf("Wrong character entered!!")

    return 0;
}
