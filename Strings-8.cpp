#include<stdio.h>
#include<strings.h>
int main()
{
	char str[50],strc[50];
	
	int i,n,t=0;
	printf("Enter a string");
	scanf("%s",str);
	i=0;
	n=strlen(str);
	while(i<n)
	{
		strc[n-i-1]=str[i];
		i++;
	}
	strc[n]='\0';
	for(i=0;i<n;i++)
	if (str[i]==strc[i])
	t=1;
	if(t==1)
	printf("It is a palindrome");
}
