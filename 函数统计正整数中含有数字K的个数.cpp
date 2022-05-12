#include <stdio.h>
int ndigit(int n,int k)
{
	int s=0;
	if(k<0)
    return -1;
	if(n==0 && k==0) 
	return 1;
	  while(n>0)
	  {
	  	if(n%10==k)
	  	    s++;
	  		
			n=n/10;
	  }
	  return s;
}
int main()
{
	int n,k,c;
	scanf("%d%d",&n,&k);
	c=ndigit(n,k);
	if(c==-1)
	printf("error");
	if(c==1)
	printf("1"); 
	else
	printf("%d",c); 
	return 0;
}

