/*Greatest fo 3 numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
		printf("A is greatest");
	    
	else if (b>c)
		printf("B is greatest");
	else
		printf("C is greatest");
		return 0;
}
