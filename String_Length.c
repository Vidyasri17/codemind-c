#include<stdio.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int c=0;
    for(int i = 0 ; s[i] != NULL ; i++)
    {
        c++;
    }
    printf("%d",c);
}