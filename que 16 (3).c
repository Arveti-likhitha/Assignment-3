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
    else if((ch>=32 && ch<=46) && (ch>=58 && ch<=64))
        printf("%c is a special case character.", ch);
    else if(ch>=47 && ch<=57)
        printf("%c is a numeric character.", ch);

    return 0;
}

