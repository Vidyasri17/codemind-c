#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int b = 0;
    for(int i = 0 ;  i < n-1; i++)
    {
        if(((arr[i]%2==0)&&(arr[i+2]%2==1))||((arr[i]%2==1)&&(arr[i+2]%2==0)))
        {
            b++;
        }
    }
    printf("%d ",b-1);
}