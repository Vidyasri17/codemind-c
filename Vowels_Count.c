#include<stdio.h>
int main(){
   char str[101];
	int i,count=0;
	scanf("%[^
]s",str);
	for( i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		count++;
	}
	printf("%d",count);
}