#include<stdio.h>
#include<strings.h>
int main()
{
	char str[50],str1[50];
	
	int i,t,n;
	printf("Enter a string");
	scanf("%s",str);
	
	i=0;
	n=strlen(str);
	while(i<(n+1)/2)
	{              
		t=str[i];
		str[i]=str[n-i-1];
		str[n-1-i]=t;
		i++;
	
	}
	
	printf("%s",str);
}
