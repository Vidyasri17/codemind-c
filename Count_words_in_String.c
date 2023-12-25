#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%[^
]s",s);
    int cnt = 0;
    for(int i = 0 ; s[i] != NULL ; i++)
    {
        if(s[i] == ' ')
        {
            cnt++;
        }
    }
    printf("%d",cnt+1);
}