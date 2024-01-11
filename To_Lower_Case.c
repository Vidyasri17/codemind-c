#include<stdio.h>
#include<string.h>
void tolowercase(char str[100])
{
    for(int i = 0 ; str[i] != NULL ; i++)
    {
         if(str[i]<97)
         {   
             str[i]=str[i]+32;
         }
    }
    printf("%s",str);
}
int main()
{   
    char str[100];
    scanf("%s",&str);
    tolowercase(str);
}