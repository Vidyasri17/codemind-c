#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i = n ; i > 0 ; i--)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("%d",j);
        }
        for(k = 1 ; k <= n - i ; k++)
        {
            printf("*");
        }
        printf("
");
    }
}