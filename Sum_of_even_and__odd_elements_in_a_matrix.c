#include<stdio.h>
int main()
{
    int m,n,i,j,e=0,o=0;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for( i = 0 ; i < m ; i++)
    {
        for( j = 0 ; j < n ; j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]%2==0)
            e = e + mat[i][j];
            else
            o = o + mat[i][j];
        }
    }
    printf("%d %d",e,o);
}