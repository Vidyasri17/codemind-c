#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,s = 0,diff;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        sum = sum + i*i;
        s=s+i;
    }
    printf("%d",abs(sum - s*s));
}