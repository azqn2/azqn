/*#include <stdio.h>
int main()
{
	int s,f,m;
	scanf("%d:%d:%d",&s,&f,&m);
    m=m+1;
    if(m>=60)
    {
    	m=0;
    	f=f+1;                               
	}                      //普通方法 
	if(f>=60)                           
	{
        f=0;
        s=s+1;
	}
    if(s==24)
    s=0;
    printf("%02d : %02d: %02d",s,f,m);
    
	return 0;
}*/

#include <stdio.h>
int f(int s,int f,int m)
{
	
    if(m>=60)
    {                               //函数 
    	m=0;
    	f++;
	}
	if(f>=60)
	{
		f=0;
		s++;
	}
	if(s>=24)
    s=0;
}
int main()
{
	int j,k,l;
	scanf("%d:%d:%d",&j,&k,&l);
	printf("%d%d%d",f(j,k,l));
	return 0;
}

/*#include <stdio.h>
struct time
{
	int h;
	int m;
	int s; 
};
int main()
{
	struct time t;
	int h,m,s;
	scanf("%d:%d:%d",&h,&m,&s);       //结构体 
	t.h=h;
	t.m=m;
	t.s=s;
	if(t.s==59)
	{
		t.s=0;
		t.m++;
		
	}
	if(t.m==60)
	{
		t.m=0;
		t.h++;
	}
	if(t.h==24)
	{
		t.h=0;
	}
	else 
	t.s++;
	printf("%02d:%02d:%02d",t.h,t.m,t.s);
	return 0;
}*/



