#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i = 0 ; i < m ;i++)
    {
        int sum = 0;
        for(int j = 0 ; j < n ; j++)
        {
        scanf("%d",&arr[i][j]);
        sum = sum + arr[i][j];
        }
        printf("%d ",sum);
    }
}