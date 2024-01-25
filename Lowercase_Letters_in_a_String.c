#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]str",&str);
    int cnt = 0;
    for(int i = 0 ; str[i] != NULL; i++)
    {
        if((str[i]>='a')&&(str[i]<='z'))
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}