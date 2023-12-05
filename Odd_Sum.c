#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0, arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i+=1)
    {
        if(arr[i]%2==1)
        {
        sum = sum + arr[i];
        }
    }
    printf("%d",sum);
}