#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for( i = 1 ; i <= m ; i++)
    {
        for( j = 1 ; j <= n ; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int x,cnt = 0;
    scanf("%d",&x);
    for( i = 1 ; i <= m ; i++)
    {
        for( j = 1 ; j <= n ; j++)
        {
            if(mat[i][j]==x)
            cnt++;
        }
    }
    if(cnt>0)
    printf("1");
    else
    printf("0");
}