#include<stdio.h>
int main()
{
    int n, i,rev=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            rev=rev+i;
        }
    }
    if(rev>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}