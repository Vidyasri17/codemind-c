#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    int arr[n];
    for(int i = 0 ; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    int a = sum/n,b=0;
    for(int i = 0 ; i< n ; i++)
    {
        if(arr[i]==a)
        {
            b++;
        }
    }
    if(b>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}