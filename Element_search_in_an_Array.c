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
    int m;
    scanf("%d",&m);
    int b = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]==m)
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