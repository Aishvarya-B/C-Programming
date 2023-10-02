/*write a c program to perform all arithmetic operators*/
#include<stdio.h>
int main()
{int a,b,c,d,e,g;
float f;
printf("Enter two values");
scanf("%d%d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=a%b;
printf("Addition results %d \n",c);
printf("Subtraction results in %d \n",d);
printf("Multiplication results in %d \n",e);
printf("Division results in %d \n",f);
printf("Modulo function results in %d \n",g);
return 0;
}

