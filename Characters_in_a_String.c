#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]str",&str);
    int i,j = 0;
    for(i = 0 ; str[i] != NULL ; i++)
    {
        int n = isdigit(str[i]);
        if(n!=1)
        {
            j++ ;
        }
    }
    printf("%d",j);
}