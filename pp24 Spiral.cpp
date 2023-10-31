/*PP24- Spiral pattern*/
#include<stdio.h>
int main()
{
	int n,p,q,r,s,i,k=1,j;
	scanf("%d",&n);
	int a[n][n];
	
	for (i=0;i<(n+1)/2;i++)
	{
		for(p=i;p<n-i;p++)
			a[i][p]=k++;
				
		for(q=i+1;q<n-i;q++)
			a[q][n-i-1]=k++;
			
	
		
		for(r=n-i-2;r>=i;r--)
			a[n-i-1][r]=k++;
				
	
			
		for(s=n-i-2;s>i;s--)
			a[s][i]=k++;                          
	}
	
/*printing array*/
	 for (i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 		printf("%5d", a[i][j]);
	 	printf("\n");
	 }
	 return 0;
}
