#include<stdio.h>
int main()
{
    int m,n,x = 0,y = 0;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0 ; i < m ; i++){
        int sum = 0;
        for(int j = 0 ; j < n ; j++)
        {
            sum = sum + mat[i][j];
        }
        if(sum > x)
        x = sum;
    }
    for(int i = 0 ; i < n ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < m ; j++)
        {
            sum = sum + mat[j][i];
        }
        if(sum > y)
        y = sum;
    }
    if(x > y) printf("%d",x);
    else printf("%d",y);
}