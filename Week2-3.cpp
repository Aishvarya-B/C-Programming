/*electricity bill*/
#include<stdio.h>
int main()
{int u,r;
scanf("%d",&u);
if (u<100)
	{
	r=50;
	printf("%d",u*r);
}
else if (u<200)
{
		r=100;
	printf("%d",u*r);
}
else
{	
	r=150;
     printf("%d",u*r);
}
return 0;
}
