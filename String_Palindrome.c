#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%s",&s1);
    int j , flag = 0 ;
    j = strlen(s1);
   for(int i = 0 ; i < j/2 ; i++)
   {
       if(s1[i]!=s1[j-i-1])
       {
           flag=1;
           break;
       }
   }
    
    if(flag)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
}