#include<stdio.h>
int main()
{
	int i,t,p=0,s,j,n,e;
	printf("Enter n");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the array elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		if(a[j+1]<a[j])
		{t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
	}
	e=a[0];
	for(i=0;i<n;i++)
	{
	
	if(a[i]==e)
	{p++;
	
	}
	else
	{printf("%d   %d\n",e,p);
	p=1;
	e=a[i];
	}
	}printf("%d   %d\n",e,p);
}
