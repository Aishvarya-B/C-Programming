#include<stdio.h>
int main()
{
	int n,i,j,s,t=false;
	printf("Enter n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements");	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter sum");
	scanf("%d",&s);
	
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if (s-a[i]==a[j])
		{
			t=true;
			printf("(%d,%d)",a[i],a[j]);
			break;
		}
		if (t==true)
		break;
		
	}
	if (t==false)
	printf("Not present");
	
	return 0;

}