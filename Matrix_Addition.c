#include<stdio.h>
int main ()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int a,b;
    scanf("%d %d",&a,&b);
    int ma[a][b];
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ;j++)
        {
            scanf("%d",&ma[i][j]);
        }
    }
    for(int i = 0 ; i < m, i < a ; i++)
    {
        for(int j = 0 ; j < n, j < b ;j++)
        {
            printf("%d ",mat[i][j]+ma[i][j]);
        }
        printf("
");
    }
}