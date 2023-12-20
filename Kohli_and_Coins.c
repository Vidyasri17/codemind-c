#include<stdio.h>
int main ()
{
    int a , x;
    scanf("%d",&a);
    if(a%10==0)
    {
        printf("%d",a/10);
    }
    else if((a%10!=0)&&(a%5==0))
    {
        x = ((a-5)/10)+1;
    
        printf("%d",x);
    }
    else
    {
        printf("-1");
    }
}