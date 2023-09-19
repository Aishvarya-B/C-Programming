/* salary*/
#include<stdio.h>
int main()
{
	int m,h,t,d,g,b,r;
	scanf("%d",&b);
	
	d=0.48*b;
	t=0.08*b;
	scanf("%d",&r);
	switch(r)
	{
		case 1: m=0.26;
		break;
		case 2: m=0.24;
		break;
		case 3: m=0.16;
		
		break;
		default:m=0.12;
		break;
		
	}
	h=m*b;
	g=t+d+h+b;
	printf("%d",g);
	return 0;
}
