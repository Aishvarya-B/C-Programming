/*decimal to binary*/
#include<stdio.h>
int main()
{
	int i,d,bin=0;
	char b="";
	printf("Enter a number");
	scanf("%d",&d);
	for(i=d;i>0;i/=2)
	b=b+char(i%2));
	printf("%c \n",b);

	
	printf("%d in binary is %d",d,bin);
	return 0;
}
