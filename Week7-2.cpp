#include<stdio.h>
#include<strings.h>
int main(){
	char s[10];
	scanf("%s",s);
	char *ptr=s;
	int i,n=strlen(s);
	for(i=0;i<n;i++)
	printf("%c",*(ptr+n-1-i));
	
}
