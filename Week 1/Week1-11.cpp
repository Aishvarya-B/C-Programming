/*SI and CI*/
#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,n,si,ci;
printf("enter p,r,t,n");
scanf("%f%f%f%f",&p,&r,&t,&n);
si=(p*r*t)/100;
ci=p*(pow((1+(r/n)),(n*t)))-p;
printf("si and ci are %f, %f",si,ci);
return 0;
}


