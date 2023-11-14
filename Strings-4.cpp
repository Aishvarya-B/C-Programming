#include<stdio.h>
#include<strings.h>
int main()
{
	char str[50],str1[50];
	
	int i,n;
	printf("Enter a string");
	scanf("%s",str);
	
	i=0;
	n=strlen(str);
	while(i<n)
	{              
		if(str[i]>64 &&str[i]<91)
		str[i]+=32;
		i++;
	
	}
	
	printf("%s",str);
}
