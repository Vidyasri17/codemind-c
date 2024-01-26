#include<stdio.h>
#include<math.h>
int calculatelength(int n)
{
    int length=0;
    while(n != 0)
    {
        length++;
        n = n/10;
    }
    return length;
}
int main()
{
    int Num,n,sum = 0 , rem = 0;
    scanf("%d",&Num);
    int len = calculatelength(Num);
    n = Num;
    while(Num > 0)
    {
        rem = Num % 10;
        sum = sum + pow(rem , len);
        Num = Num/10;
        len--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
