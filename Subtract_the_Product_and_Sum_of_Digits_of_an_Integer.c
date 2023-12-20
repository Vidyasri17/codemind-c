#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum = 0 ,pro = 1;
    scanf("%d",&n);
    while(n>0)
    {
        sum = sum + n%10;
        pro = pro*(n%10);
        n = n/10;
    }
    printf("%d",abs(sum-pro));
}