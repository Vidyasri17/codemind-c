#include<stdio.h>
int main()
{
    int n,sum,prs=1,prv=0;
    scanf("%d",&n);
    sum = prv+prs;
    while(sum<=n)
    {
        prv = prs;
        prs = sum;
        sum = prv + prs;
    }
    if((n==prv)||(n==prs)||(n==sum))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}