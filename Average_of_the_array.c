#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    float sum = 0.00;
    for(int i = 0 ; i < n ; i++)
    {
        sum+=arr[i];
    }
    printf("%0.2f",sum/n);
}