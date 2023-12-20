#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d %d",&x,&y);
    z = (500-2*x)+(1000-(x+y)*4);
    a = (1000-4*y)+(500-(x+y)*2);
    if(z>a)
    {
        printf("%d",z);
    }
    else
    {
        printf("%d",a);
    }
}