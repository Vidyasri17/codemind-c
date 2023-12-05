#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 1 ; i < n ; i+=2)
    {
        sum = sum + arr[i];
    }
    printf("%d",sum);
}