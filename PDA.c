#include<stdio.h>
int main()
{
    int n,mult=0;
    scanf("%d",&n);
    for(int i = 1 ; i < n ; i++)
    {
        if(n%i == 0 )
        {
            mult+=i;
        }
    }
    if(mult==n)
    {
        printf("PERFECT");
    }
    else if(mult<n)
    {
        printf("DEFICIENT");
    }
    else if(mult>n)
    {
        printf("ABUNDANT");
    }
}