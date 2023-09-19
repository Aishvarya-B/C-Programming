/* no of days*/
#include<stdio.h>
int main()
{
	int m,y;
	scanf("%d %d",&y,&m);
	if( m==2)
		if (y%4==0 &&(y%400==0 ||y%100!=0))
			printf("%d",29);
		else
			printf("%d",28);	
		
	else if (m==1 || m==3 ||m==5||m==7|| m==8||m==10|| m==12)
		printf("%d",31);
	else if (m==4 || m==6 ||m==9||m==11)
		printf("%d",30);
	return 0;	
}
