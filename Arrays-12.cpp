#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter n");
	scanf("%d",&n);
	int a[n]
;
	printf("Enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{if (a[i]==a[j])
		{t=-1;
		break;}
		else
		t=i;
		}
		if (t!=-1)
		{printf("first non repeating :%d",a[i]);
		break;}
		
		
	}
}
