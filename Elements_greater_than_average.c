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
    int a = 0,b = 0;
    for(int i = 0 ; i < n ; i++)
    {
        a = a + arr[i];
    }
    int c = a / n;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]>=c)
        {
            b++;
        }
    }
    printf("%d",b);
}