/*decimal to binary*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,d,bin=0,j;
	
	printf("Enter a number");
	scanf("%d",&d);
	for(i=d,j=0;i>0;i/=2,j++)
	bin=bin+(i%2)*pow(10,j);
	
	
	printf("%d in binary is %d",d,bin);
	return 0;
}
