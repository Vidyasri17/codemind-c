#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int even=0,odd=0;
    int mat[m][n];
    for(int i = 1 ; i <= m ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]%2==0)
            {
                even = even + mat[i][j];
            }
            else
            {
                odd = odd + mat[i][j];
            }
        }
    }
    printf("%d %d",even ,odd);
}