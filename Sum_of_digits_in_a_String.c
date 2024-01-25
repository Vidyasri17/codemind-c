#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",&s);
    int sum = 0;
    for(int i = 0 ; s[i] != NULL ; i++)
    {
        int n = isdigit(s[i]);
        if(n==1)
        {
            sum = sum + s[i] - 48 ;
        }
    }
    printf("%d",sum);
}