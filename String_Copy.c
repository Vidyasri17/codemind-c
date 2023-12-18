#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]%*c",&str);
    printf("%s",str);
}