#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum = 0.00;
    for(float i = 1.00 ; i <= n ; i++)
    {
        sum = sum + (1/i);
    }
    printf("%.2f",sum);
}