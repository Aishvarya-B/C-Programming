#include<stdio.h>
int main()
{
	char str[50],str1[50];
	
	int i,n,t=1;
	printf("Enter a string1");
	scanf("%s",str);
	printf("Enter a string2");
	scanf("%s",str1);
	i=0;
	n=0;
	while(str[i]!='\0'||str1[i]!='\0')
	{
		if(str1[i]!=str[i])
		{printf("Strings are not equal");
		t=0;
		break;
		
		}
		i++;
	}
	if(t==1)
	printf("Both are equal");
}
