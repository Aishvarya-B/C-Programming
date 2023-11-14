#include<stdio.h>
int main()
{
	char str[50];
	int i,n;
	printf("Enter a string");
	scanf("%s",str);
	i=0;
	n=0;
	while(str[i]!='\0')
	{
		i++;
		n++;
	}
	printf("%d",n);
}
