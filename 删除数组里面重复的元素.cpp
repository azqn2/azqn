#include <stdio.h>
int main ()
{
	int a[100],i,n,j;
	int c=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]==a[i])
		
			{
			   a[j]=a[n-1];
			   
			  
			}
		}
	}
	for(i=0;i<n-1;i++)
	printf("%d",a[i]);
	return 0;
}
