#include<stdio.h>
void bubble_sort(int *A , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n-1 ; j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main()
{
	int n,i,cnt = 0;
	scanf("%d",&n);
	int arr[n];
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	i = 0;
	while(i <= n-1)
	{
	    if(arr[i] == arr[i+1])
	    {
	        cnt++;
	        i+=2;
	    }
	    else
	    {
	        i++;
	    }
	}
	printf("%d",cnt);
}