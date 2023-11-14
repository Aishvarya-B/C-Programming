#include<stdio.h>
#include<strings.h>
int main()
{
	char str[50],str1[50];
	
	int i,n;
	printf("Enter a string");
	scanf("%s",str);
	printf("Enter a string to be added");
	scanf("%s",str1);
	i=0;
	n=strlen(str);
	while(str1[i]!='\0')
	{              
		str[n+i]=str1[i];
		i++;
	}
	str[n+i+1]='\0';
	printf("%s",str);
}
