#include<stdio.h>
int main()
{
	int n,i,j,k,s,t=false,r=false;
	printf("Enter n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements");	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter sum");
	scanf("%d",&s);
	
	for(i=0;i<n;i++)
	{for(j=i+1;j<n;j++)
	{
		if (s>a[i]+a[j])
		{
			t=true;
			for(k=j+1;k<n;k++)
				{
				
					if (s-a[i]-a[j]==a[k])
					{
						r=true;
						printf("(%d,%d,%d)",a[i],a[j],a[k]);
						break;
					}
					if (r==true)
					break;
					
				}
		
		}
		if (r==true)
			break;
		
	}
	if(r==true)
	break;}
	if (t==false)
	printf("Not present");
	
	return 0;

}