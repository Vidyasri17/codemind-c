#include<stdio.h>
int main()
{
    int n , i , j , m ;
    scanf("%d", &n );
    m = n;
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= m ; j++)
        {
            printf("%d ", j );
        }
        printf("
");
        m--;
    }
}