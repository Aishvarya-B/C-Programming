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
	strcpy(strc,str);
	strlwr(strc);
	
	while(i<n)
	{
		if(strc[i]=='a'|| strc[i]=='e'|| strc[i]=='i'||strc[i]== 'o'|| strc[i]=='u')
		printf("%c",str[i]);
		i++;
		
	}
	
}
