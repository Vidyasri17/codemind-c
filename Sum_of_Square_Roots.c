#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float sum = 0.00;
    scanf("%d %d",&a,&b);
    for(int i = a ; i <= b ; i++)
    {
        
            sum=sum+ sqrt (i);
    }
    printf("%.2f",sum);
}