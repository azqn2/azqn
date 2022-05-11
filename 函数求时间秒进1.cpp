/*#include <stdio.h>
int main()
{
	int s,f,m;
	scanf("%d%d%d",&s,&f,&m);
    m=m+1;
    if(m>=60)
    {
    	m=m-60;
    	f=f+1;
	}
	if(f>=60)
	{
        f=f-60;
        s=s+1;
	}
    if(s>=24)
    s=s-24;
    printf("%d : %d : %d",s,f,m);
    
	return 0;
}*/

#include <stdio.h>
int f(int s,int f,int m)
{
	int a,b,c;
    if(c>=60)
    {
    	c=c-60;
    	b=b+1;
	}
	if(b>=60)
	{
		b=b-60;
		a=a+1;
	}
	if(c>=24)
    a=a-24;
    return 0;
}
int main()
{
	int j,k,l;
	scanf("%d%d%d",&j,&k,&l);
	l=l+1;
	printf("%d%d%d",f(j,k,l));
	return 0;
	
}




