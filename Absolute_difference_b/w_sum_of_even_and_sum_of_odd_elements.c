#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int even=0,odd=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even+=arr[i];
        }
        else
        {
            odd+=arr[i];
        }
    }
    printf("%d",abs(even-odd));
}