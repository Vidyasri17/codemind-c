#include<stdio.h>
int main()
{
    int n , i , j , m ;
    scanf("%d", &n );
    m = n;
    for(i = 1 ; i <= n ; i++)
    {
        for(j = m ; j > 0 ; j--)
        {
            printf("%d ", i );
        }
        printf("
");
        m--;
    }
    
}