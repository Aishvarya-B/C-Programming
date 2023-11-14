#include<stdio.h>
#include<strings.h>

#include<stdlib.h>
int main()
{
	char str[50],strc[50],ch,s,t;
	
	int i,n,k;
	printf("Enter a string");
	scanf("%s",str);
	n=strlen(str);
	fflush(stdin);
	printf("Enter a char");
	scanf("%c",&ch);
	printf("Enter position");
	scanf("%d",&k);
	
	t=str[k-1];
	str[k-1]=ch;
	
	for(i=k;i<n+1;i++)
	{s=str[i];
	str[i]=t;
	t=s;}
	printf("%s",str);
	


	
	
}
