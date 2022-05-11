#include <stdio.h>
int f(int a, int b, int c)
{
	int s=0;
	if(b==1)
	s=c;
	else if(b==2)
	s=31+c; 
	else if(b==3)
	s=31+28+c;
    else if(b==4)
    s=31+28+31+c;
    else if(b==5) 
    s=31+28+31+30+c;
    else if(b==6)
	s=31+28+31+30+34+c;
	else if(b==7)
	s=31+28+31+30+31+30+c;
	else if(b==8)
	s=31+28+31+30+31+30+31+c;
	else if(b==9) 
	s=31+28+31+30+31+30+31+31+c;
	else if(b==10)
	s=s=31+28+31+30+31+30+31+31+30+c;
	else if(b==11)
	s=31+28+31+30+31+30+31+31+30+31+c;
	else if(b==12)
	s=s=31+28+31+30+31+30+31+31+30+31+30+c;
	return s;
	 
}
int main()
{
	int x,y,z;
	int sum;
	scanf("%d/%d/%d",&x,&y,&z);
	sum=f(x,y,z);
	printf("%d",sum);
    return  0;
}

