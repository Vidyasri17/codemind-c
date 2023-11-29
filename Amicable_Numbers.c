#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0,rev=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            sum=sum+i;
        }
    }
    for(j=1;j<n;j++)
    {
        if(n%j==0)
        {
            rev=rev+j;
        }
    }
    if((m==rev)&&(n==sum))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}