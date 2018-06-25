#include <stdio.h>

int main()
{
    char a[100],ch;
    int i,f=0;
    printf("Enter the String\n");
    gets(a);
    printf("Enter the target Frequency\n");
    scanf("%c",&ch);
    for(i=0;a[i]!='\0';i++)
    {
        if(ch==a[i])
        {
            ++f;
        }
    }
    printf("The Frequency of %c is %d",ch,f);
    return 0;
}
