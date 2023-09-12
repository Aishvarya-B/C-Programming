/*km to m cm and mm*/
#include<stdio.h>
int main()
{ float km,m,mm,cm;
scanf("%f",&km);
m=km*1000;
cm=m*100;
mm=cm*10;
printf("km ,m,mm,cm are %f,%f,%f,%f",km,m,cm,mm);
return 0;
}
