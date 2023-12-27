#include<stdio.h>
int main (){
    int m,n;
    scanf("%d %d",&m,&n);
    int i = m;
    if(m%n==0)
    {
        printf("0");
    }
    while(m%n!=0)
    {
        m = m + 1;
        if(m % n==0)
        {
            printf("%d",m-i);
        }
    }
}