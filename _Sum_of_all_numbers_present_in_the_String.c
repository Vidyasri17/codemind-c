#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int sum = 0 ;
    for(int i = 0 ; s[i] != NULL ; i++)
    {
        if(isdigit(s[i])!=0)
        {
            sum = sum + (s[i]-48);
        }
    }
    printf("%d",sum);
}