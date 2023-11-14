#include<stdio.h>
int main()
{
	char str[50],strc[50];
	
	int i,n;
	printf("Enter a string");
	scanf("%s",str);
	i=0;
	n=0;
	while(str[i]!='\0')
	{
		strc[i]=str[i];
		i++;
	}
	strc[i+1]='\0';
	printf("%s",strc);
}
