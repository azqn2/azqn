#include <stdio.h>
double f(int x)
{ 
    int i;
    double sum=0;
    if(x<=0)
    return 0;
    else
	for(i=1;i<=x;x++)
	sum+=1.0/i; 
    return sum;
}
int main()
{
	int n;
	scanf("%lf",&n);
	printf("%.5lf",f(n));
	return 0;
}
