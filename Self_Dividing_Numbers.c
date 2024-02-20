#include<stdio.h>
int self_dividing(int n)
{
    int temp = n;
    while(n!=0)
    {
        int digit = n % 10 ;
        if(digit !=0)
        {
            if(temp % digit != 0)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
        n/=10;
    }
    return 1;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i = m ; i <= n ;i++)
    {
        if(self_dividing(i))
        {
            printf("%d ",i);
        }
    }
}