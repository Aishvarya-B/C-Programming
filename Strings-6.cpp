#include<stdio.h>
#include<strings.h>
int main()
{
	char str[50],ch;
	
	int i,t=0,n;
	printf("Enter a string");
	scanf("%s",str);
	printf("Enter a char");
	scanf("%c",&ch);
	
	
	i=0;
	n=strlen(str);
	while(i<n)
	{              
		if(str[i]==ch)
		{printf("Char found in index no %d",i);
		t=1;
		break;}
		i++;
	
	}
	if(t==0)
	printf("Not found");

}
