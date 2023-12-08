#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i = 1 ; i <= t ; i++)
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        if(n<=(m-k))
        {
            printf("YES
"); 
        }
        else
        {
            printf("NO
");
        }
    }
}