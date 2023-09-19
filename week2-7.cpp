/*percent and grade*/
#include<stdio.h>
int main()
{int p,c,m,cs,b,a;
scanf("%d%d%d%d%d",&p,&c,&m,&b,&cs);
a=(p+c+m+cs+b)/5;

if (a>=90)
printf("Grade A");
else if (a>=80)
printf("Grade B");
else if (a>=70)
printf("Grade C");
else if (a>=60)
printf("Grade D");
else if (a>=40)
printf("Grade E");
else if (a< 40)
printf("Grade F");
return 0;
}
