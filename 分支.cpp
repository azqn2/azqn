#include<stdio.h>
#include <unistd.h>
#include<string.h>
#include <windows.h> 
#include<stdlib.h>
#include<conio.h>
#define max 100
#define MAX 100
char adminname[10]="www";
char adminpassword[10]="123";

struct fuzhuang
{
	int num;/*登录号*/
	char name[100];/*商品名*/
	char shuliang[100];/*数量单位*/
	char zl[100];/*质量情况*/
	char place[100];/*位置*/
	char people[100];/*办理人*/
}stu[MAX];

struct huiyuan
{
	int num;/*编号*/
	char name[100];/*姓名*/
	char sex[100];/*性别*/
	char phone[100];/*电话*/
	char dengji[100];/*等级*/
	char score[100];/*积分*/
}shui[max];

void huiyuan()
{   
    system("cls");
    void glxt();//管理系统 
    void main1(); //主函数 
	void Input1();/*输入*/
	void Display1();/*输出*/
	void Find1();/*查找*/
	void del();/*删除*/
	void Change1();/*修改*/
	int n;
    for(;;)
	{    system("cls");

		printf("\n");printf("\n\n\n");
        printf("             ※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n");
        printf("             ※                                                          ※\n");
        printf("             ※                     欢迎来到会员系统                      ※\n");
        printf("             ※                                                          ※\n");
        printf("             ※                                                          ※\n");
		printf("             ※                          主菜单                          ※\n");
		printf("             ※                                                          ※\n");
        printf("             ※                   ▲1.会员信息录入  ▲                   ※\n");        
		printf("             ※                                                          ※\n");
		printf("             ※                   ▲2.会员信息浏览  ▲                   ※\n");
        printf("             ※                                                          ※\n");
		printf("             ※                   ▲3.会员信息查询  ▲                   ※\n");          
		printf("             ※                                                          ※\n");
		printf("             ※                   ▲4.会员信息删除  ▲                   ※\n");
	    printf("             ※                                                          ※\n");
		printf("             ※                   ▲5.会员信息修改  ▲                   ※\n");
        printf("             ※                                                          ※\n");
		printf("             ※                   ▲6.退出系统      ▲                   ※\n"); 
        printf("             ※                                                          ※\n");
        printf("             ※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n\n");
        printf("                               请输入选择项(1-6):");
        scanf("%d",&n);
        printf("\n\n\n\n");
        if(n>0&&n<7)
		{
			switch(n)
			{
			   case 1:Input1();break;
               case 2:Display1();break;
               case 3:Find1();break;
               case 4:del();break;
			   case 5:Change1();break; 
			   
               case 6:
               	
    system("cls");printf("\n\n\n");
			          printf("                      ※※※※※※※※※※※※※※※※※※※※※※※※\n");
                      printf("                      ※                                            ※\n");
                      printf("                      ※                  退出中!                   ※\n");
                      printf("                      ※                                            ※\n");
                      printf("                      ※※※※※※※※※※※※※※※※※※※※※※※※\n");
	sleep(2);
                      glxt(); 
			}
		}
        else 
		{
    system("cls");printf("\n\n\n");
			          printf("                      ※※※※※※※※※※※※※※※※※※※※※※※※\n");
                      printf("                      ※                                            ※\n");
                      printf("                      ※                  输入错误!                 ※\n");
                      printf("                      ※                                            ※\n");
                      printf("                      ※※※※※※※※※※※※※※※※※※※※※※※※\n");
	sleep(2);
	        huiyuan(); 
		}
	}
}

void Find1()/*查找*/
{   
	FILE *fp;
	int i;
	int choose,t;
	char ans[100];
    
					    fp=fopen("vip","a+");                       

    for(i=0;fread(&shui[i],sizeof(struct huiyuan),1,fp)==1;i++)
	{
	}	
	fclose(fp);
	do
	{
		printf("按1姓名查找\n");
		printf("返回主菜单(其他数字)\n");
		scanf("%d",&choose);
		if(choose==1)
		{
			printf("输入所查姓名：\n");
			scanf("%s",ans);
			t=-1;
			if(choose==1)
			{
				for(i=0;i<max;i++) 
				{
					t=i;

                    if(strcmp(ans,shui[i].name)==0) 
                    
					printf("%d %s %s %s %s %s ",shui[t].num,shui[t].name,shui[t].sex,shui[t].phone,shui[t].dengji,shui[t].score);
					
				}
			}
			if(t==-1) printf("不存在该信息\n");
		}
	    
		else return;
	}while(1);
}


void Display1()/*输出*/
{
	system("cls");
	FILE *fp;
    int i;
    fp=fopen("vip","a+");                       
    printf("※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n");
    printf("                      列表\n");
    printf("-----------------------------------------------------------\n");
    printf("编号   姓名    性别  电话  会员等级  积分   ");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&shui[i],sizeof(struct huiyuan),1,fp)==1;i++)
	{
		printf("%6d %8s %8s %8s %8s %8s \n",shui[i].num,shui[i].name,shui[i].sex,shui[i].phone,shui[i].dengji,shui[i].score);
	}
	
	getch();
	fflush(stdin);
	fclose(fp);
}


void Input1()/*输入*/
{   
       system("cls");

	FILE *fp;
	int n;
	fp=fopen("vip","a+"); 
	for(n=0;n<max;n++)
	{
		printf("n=%d 输入序号n(当输入n=-1时,返回),n=",n++);
        scanf("%d",&n);
		if(n==-1) 
		{
		    fclose(fp);
			return;
		}
		else
		{
			printf("请输入编号   姓名    性别  电话  会员等级  积分\n");
			scanf("%d%s%s%s%s%s",&shui[n].num,shui[n].name,shui[n].sex,shui[n].phone,shui[n].dengji,shui[n].score);
	        fwrite(&shui[n],sizeof(struct huiyuan),1,fp);
		}
	}
	fclose(fp);
}

void del()/*删除*/
{
	    system("cls");

	FILE *fp;
	int i,flag,n,s,j;    
     fp=fopen("vip","a+");     
    rewind(fp);
     printf("                      列表\n");
    printf("-----------------------------------------------------------\n");
    printf("编号   姓名    性别  电话  会员等级  积分\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&shui[i],sizeof(struct huiyuan),1,fp)==1;i++)
	{
  printf("%6d %8s %8s %8s %8s %8s \n",shui[i].num,shui[i].name,shui[i].sex,shui[i].phone,shui[i].dengji,shui[i].score);
    printf("\n");
	} 
	n=i;
	printf("输入待删除编号:\n");
	scanf("%d",&s);
	for(i=0,flag=1;flag&&i<n;i++)
	{
		if(s==shui[i].num)
		{
			for(j=i;j<n-1;j++)
			{
				shui[j].num=shui[j+1].num;
		        strcpy(shui[j].name,shui[j+1].name);                            
                strcpy(shui[j].sex,shui[j+1].sex);
		        strcpy(shui[j].phone,shui[j+1].phone);
		        strcpy(shui[j].dengji,shui[j+1].dengji);
				strcpy(shui[j].score,shui[j+1].score);
				
			}
			flag=0;
		}
	}
	if(!flag)
		n=n-1;
	else
	    printf("没有此号\n");
	fp=fopen("vip","w+");
	for(i=0;i<n;i++)
		fwrite(&shui[i],sizeof(struct  huiyuan),1,fp);
    fclose(fp);
/*	fp=fopen("vip","r");   
    printf("                      列表\n");
    printf("-----------------------------------------------------------\n");
    printf("编号   姓名    性别  电话  会员等级  积分\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;i<n;i++)
	{
    fread(&shui[i],sizeof(struct huiyuan),1,fp);
      printf("%6d %8s %8s %8s %8s  \n",shui[i].num,shui[i].name,shui[i].sex,shui[i].phone,shui[i].dengji,shui[i].score);
    printf("\n");
	}
    fclose(fp);*/
}	
	

void Change1()/*修改*/
{ 
    system("cls");

	FILE *fp;
    int i,num,n;
    int flag=0;    
    printf("请输入要修改的编号:");
    scanf("%d",&num);
    for(i=0;i<=max;i++)
    if(shui[i].num==num)
	{
        printf("                      列表\n");
        printf("-----------------------------------------------------------\n");
        printf("编号   姓名    性别  电话  会员等级  积分\n");
        printf("-----------------------------------------------------------\n");
        printf("%6d %8s %8s %8s %8s %8s \n",shui[i].num,shui[i].name,shui[i].sex,shui[i].phone,shui[i].dengji,shui[i].score);
        printf("-----------------------------------------------------------\n\n");
        n=i;
        flag=1;
        break;
	}
    if(flag==0)
	{
    system("cls");
		printf("※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n");       
		 printf("                         !\n");

        printf("                        输入错误!\n");
        printf("                         !\n");
        printf("※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n");
	sleep(2);
        return;
    }
    printf("\n\n\n");  
    fp=fopen("vip","a+");
    fseek(fp,n*sizeof(struct huiyuan),0);
    printf("编号   姓名    性别  电话  会员等级  积分\n");
    scanf("%d%s%s%s%s%s",&shui[n].num,shui[n].name,shui[n].sex,shui[n].phone,shui[n].dengji,shui[n].score); 
    fwrite(&shui[i],sizeof(struct huiyuan),1,fp);
    fclose(fp);
    fp=fopen("vip","a+");
    printf("                      图书列表\n");
    printf("-----------------------------------------------------------\n");
    printf("编号   姓名    性别  电话  会员等级  积分\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&shui[i],sizeof(struct huiyuan),1,fp)==1;i++)
	{
    printf("%6d %8s %8s %8s %8s %8s \n",shui[i].num,shui[i].name,shui[i].sex,shui[i].phone,shui[i].dengji,shui[i].score);;
	}
    printf("-----------------------------------------------------------\n\n");
    fclose(fp);
} 

int xgmm()
{   
    void main1();
	void glxt();
    system("cls");
    int f=1;
	char a[20],b[20],c[20],m[20];
	FILE *fp;
	if((fp=fopen("mima.txt","a+"))==NULL)
	{
		printf("\n系统打开失败！\n");
		exit(0);
	}
	    fgets(m,16,fp);
	    fclose(fp);printf("\n\n\n");
	   	printf("     *************修改密码界面************\n"); 
	   	printf("     **************输入Q退出**************\n"); 

	  	printf("     *请输入旧密码：");
	fflush(stdin); 
	scanf("%s",a);
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]=='q'||a[i]=='Q')
		{
			glxt();
			return 0;
		}
	 } 
	if(strcmp(a,m) ==0)
	{
		while(f)
		{
		
	   	printf("     **************************************\n"); 
	  	printf("     *请输入新密码：");
	  	fflush(stdin);
	  	scanf("%s",b);
	for(int i=0;b[i]!=0;i++)
	{
		if(b[i]=='q'||b[i]=='Q')
		{
			glxt();
			return 0;
		}
	 } 
	   	printf("     **************************************\n"); 
	  	printf("     *再次输入新密码：");
	  	    scanf("%s",c);
	  	    
	for(int i=0;b[i]!=0;i++)
	{
		if(b[i]=='q'||b[i]=='Q')
		{
			glxt();
			return 0;
		}
	 } 
	  		if(strcmp(b,c) ==0)
              {
              	
	if((fp=fopen("mima.txt","w+"))==NULL)
	{
		printf("\n系统打开失败！\n");
		exit(0);
	}
	    
              	fputs(b,fp);
              	fclose(fp);
              	printf("              --------------密码修改成功");
              	f=0;
				 getch() ;
			  }
			  else
			  {
			  	
		printf("    ----------密码不一致，按任意键请重新输入\n\n");
		getch();
		fflush(stdin); 
			  }
		}
			

	}else
	{
    printf("旧密码错误");
    getch(); 
    fflush(stdin);
	xgmm(); 
	}
	if(f==0)
	{
		main1();
	}
	
}

void glxt()
{   
        system("cls");

    void fuzhuang();
    void main1();
    void denglu();
    system("cls");
	printf("\n");printf("\n\n\n");

	printf("                          **********************************\n");
	printf("                          *          1.会员管理            *\n");
	printf("                          *          2.销售管理            *\n");	
	printf("                          *          3.管理员修改密码      *\n");		
	printf("                          *          4.退出                *         \n");	
	printf("                          **********************************\n\n");	
	printf("                                     请输入选项 （1-4）");
	char a;
	fflush(stdin);
	a=getchar();
    if(a=='4')
    {
    	main1();
	}else 
	{
		if(a=='1')
		{
			huiyuan();
			
		}else 
			{
			if(a=='2')
			{
				fuzhuang();
			} else 
				{
				if(a=='3')
				{
					xgmm();
				} else
				  {
				  	 
				  	printf("输入错误");
					  getch(); 
glxt();				  }
				}
		}
		
	}
}
				  	  				  	  
void denglu()
{   
    void main1();
	system("cls"); 
		int i=0;
		char x[20],m[20],h,f[20],k[20];
	FILE *fp;
	if((fp=fopen("mima.txt","a+"))==NULL)
	{
		printf("\n系统打开失败！\n");
		exit(0);
	}
	    fgets(k,16,fp) ;
	   	printf("     *************登录系统************\n"); 
	  	printf("     ***********按Q键回车退出*********\n"); 
	  	printf("     *请输入账号："); 
		 
        scanf("%s",x);
        for(int i=0;x[i]!=0;i++)
		{
			if(x[i]=='q'||x[i]=='Q')
			{
				main1();
				break;
			}
		 } 
        if(strcmp(x,adminname) ==0)
        {
        
        printf("     *请输入密码：");        
	    scanf("%s",m);  
	    
        for(int i=0;m[i]!=0;i++)
		{
			if(m[i]=='q'||m[i]=='Q')
			{
				main1();
				break;
			}
		 } 
	    if(strcmp(m,adminpassword)==0||strcmp(m,k)==0)
	    {   
	        if(strcmp(m,k)==0)
	        {
	    	fclose(fp);
	    	glxt();
			}
			else
			{
			printf("密码错误");
			getche();
			fclose(fp);
			denglu();
			}
		}
		else 
		{
			
			printf("密码错误");
			getche();
			fclose(fp);
			denglu();
		}
		} 
		else 
		{
			printf("账号错误");
			getche();
			fclose(fp);
			denglu();
		}
   
}


void fuzhuang()//
{
	system("cls");
	void main1();  
	void Input();/*输入*/
	void Display();/*输出*/
	void Find();/*查找*/
	void delet();/*删除*/
	void Change();/*修改*/
	int n;
    for(;;)
	{    system("cls");

		printf("\n");printf("\n\n\n\n\n\n\n\n\n\n");

        printf("                 ※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n");
        printf("                 ※                                                          ※\n");
        printf("                 ※                 欢迎来到服装信息管理系统                 ※\n");
        printf("                 ※                                                          ※\n");
        printf("                 ※                                                          ※\n");
		printf("                 ※                          主菜单                          ※\n");
		printf("                 ※                                                          ※\n");
        printf("                 ※                   ▲1.服装信息录入  ▲                   ※\n");        
		printf("                 ※                                                          ※\n");
		printf("                 ※                   ▲2.服装信息浏览  ▲                   ※\n");
        printf("                 ※                                                          ※\n");
		printf("                 ※                   ▲3.服装信息查询  ▲                   ※\n");          
		printf("                 ※                                                          ※\n");
		printf("                 ※                   ▲4.服装息删除    ▲                   ※\n");
	    printf("                 ※                                                          ※\n");
		printf("                 ※                   ▲5服装信息修改   ▲                   ※\n");
        printf("                 ※                                                          ※\n");
		printf("                 ※                   ▲6.退出系统      ▲                   ※\n"); 
        printf("                 ※                                                          ※\n");
        printf("                 ※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n\n");
        printf("                                       请输入选择项(1-6):");
        scanf("%d",&n);
        printf("\n\n\n\n");
        if(n>0&&n<7)
		{
			switch(n)
			{
			   case 1:Input();break;
               case 2:Display();break;
               case 3:Find();break;
               case 4:delet();break;
			   case 5:Change();break; 
               case 6:
                     glxt();
			}
		}
        else 
		{
    system("cls");printf("\n\n\n\n\n\n\n\n\n\n");

			printf("※※※※※※※※※※※※※※※※※※※※※※※※\n");
            printf("※                                            ※\n");
            printf("※                  输入错误!                 ※\n");
            printf("※                                            ※\n");
            printf("※※※※※※※※※※※※※※※※※※※※※※※※\n");
	sleep(2);
		}
	}
}

void Find()/*查找*/
{   system("cls");

	FILE *fp;
	int i;
	int choose,t;
	char ans[100];
    
                    fp=fopen("fuzhuang","a+");
    for(i=0;fread(&stu[i],sizeof(struct fuzhuang),1,fp)==1;i++)
	{
	}
					fclose(fp);
	do
	{
		printf("输入1.按商品名查找\n");
		printf("返回主菜单(其他数字)\n");
		scanf("%d",&choose);
		if(choose==1)
		{
			printf("输入所商品名：\n");
			scanf("%s",ans);
			t=-1;
			if(choose==1)
			{
				for(i=0;i<MAX;i++) 
				{
					t=i;
					if(strcmp(ans,stu[i].name)==0) 
					printf("%d %s %s %s %s %s \n\n\n",stu[t].num,stu[t].name,stu[t].shuliang,stu[t].zl,stu[t].place,stu[t].people);
				}
			}
			if(t==-1) printf("不存在该信息\n");
		}
		
		else return;
	}while(1);
	getch();
	fflush(stdin);
}


void Display()/*输出*/
{
	    system("cls");

	FILE *fp;
    int i;
    fp=fopen("fuzhuang","a+");                       
    printf("※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n");
    printf("                     列表\n");
    printf("-----------------------------------------------------------\n");
    printf("登录号    商品    数量单位   质量    位置   办理人\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&stu[i],sizeof(struct fuzhuang),1,fp)==1;i++)
	{
		printf("%6d %8s %8s %8s %8s %8s\n",stu[i].num,stu[i].name,stu[i].shuliang,stu[i].zl,stu[i].place,stu[i].people);
	}
	fclose(fp);
	getch();
	fflush(stdin);
}


void Input()/*输入*/
{
	    system("cls");

	FILE *fp;
	int n;
	fp=fopen("fuzhuang","a+"); 
	for(n=0;n<MAX;n++)
	{
		printf("n=%d 输入序号n(当输入n=-1时,返回),n=",n++);
        scanf("%d",&n);
		if(n==-1) 
		{
		    fclose(fp);
			return;
		}
		else
		{
			printf("  登录号    商品    数量单位   质量    位置   办理人\n");
			scanf("%d%s%s%s%s%s",&stu[n].num,stu[n].name,stu[n].shuliang,stu[n].zl,stu[n].place,stu[n].people);
	        fwrite(&stu[n],sizeof(struct fuzhuang),1,fp);
		}
	}
	fclose(fp);
}

void delet()/*删除*/
{
	    system("cls");

	FILE *fp;
	int i,flag,n,s,j;    
     fp=fopen("fuzhuang","a+");     
    rewind(fp);
     printf("                      列表\n");
    printf("-----------------------------------------------------------\n");
    printf("  登录号    商品    数量单位   质量    位置   办理人\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&stu[i],sizeof(struct fuzhuang),1,fp)==1;i++)
	{
  printf("%6d %8s %8s %8s %8s %8s \n",stu[i].num,stu[i].name,stu[i].shuliang,stu[i].zl,stu[i].place,stu[i].people);
    printf("\n");
	} 
	n=i;
	printf("输入待删除登录号:\n");
	scanf("%d",&s);
	for(i=0,flag=1;flag&&i<n;i++)
	{
		if(s==stu[i].num)
		{
			for(j=i;j<n-1;j++)
			{
				stu[j].num=stu[j+1].num;
		        strcpy(stu[j].name,stu[j+1].name);                            
                strcpy(stu[j].shuliang,stu[j+1].shuliang);
		        strcpy(stu[j].zl,stu[j+1].zl);
		        strcpy(stu[j].place,stu[j+1].place);
				strcpy(stu[j].people,stu[j+1].people);
			}
			flag=0;
		}
	}
	if(!flag)
		n=n-1;
	else
	    printf("没有此号\n");
	fp=fopen("fuzhuang","w+");
	for(i=0;i<n;i++)
		fwrite(&stu[i],sizeof(struct  fuzhuang),1,fp);
    fclose(fp);
	fp=fopen("fuzhuang","a+");   
    printf("                     列表\n");
    printf("-----------------------------------------------------------\n");
    printf("  登录号    商品    数量单位   质量    位置   办理人\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;i<n;i++)
	{
    fread(&stu[i],sizeof(struct fuzhuang),1,fp);
      printf("%6d %8s %8s %8s %8s %8s \n",stu[i].num,stu[i].name,stu[i].shuliang,stu[i].zl,stu[i].place,stu[i].people);
    printf("\n");
	}
    fclose(fp);
}	
	

void Change()/*修改*/
{ 
    system("cls");

	FILE *fp;
    int i,num,n;
    int flag=0;    
    printf("请输入要修改的登录号:");
    scanf("%d",&num);
    for(i=0;i<=MAX;i++)
    if(stu[i].num==num)
	{
        printf("                      列表\n");
        printf("-----------------------------------------------------------\n");
        printf("  登录号    商品    数量单位   质量    位置   办理人\n");
        printf("-----------------------------------------------------------\n");
        printf("%6d %8s %8s %8s %8s %8s \n",stu[i].num,stu[i].name,stu[i].shuliang,stu[i].zl,stu[i].place,stu[i].people);
        printf("-----------------------------------------------------------\n\n");
        n=i;
        flag=1;
        break;
	}
    if(flag==0)
	{
    system("cls");
		printf("※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n");
        printf("                        输入错误!\n");
        printf("                         !\n");
        printf("※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※\n");
	sleep(2);
        return;
    }
    printf("\n\n\n");  
    fp=fopen("fuzhuang","a+");
    fseek(fp,n*sizeof(struct fuzhuang),0);
    printf("登录号    商品    数量单位   质量    位置   办理人\n");
    scanf("%d%s%s%s%s%s",&stu[n].num,stu[n].name,stu[n].shuliang,stu[n].zl,stu[n].place,stu[n].people); 
    fwrite(&stu[i],sizeof(struct fuzhuang),1,fp);
    fclose(fp);
    fp=fopen("fuzhuang","rb");
    printf("                      列表\n");
    printf("-----------------------------------------------------------\n");
    printf("  登录号    商品    数量单位   质量    位置   办理人\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&stu[i],sizeof(struct fuzhuang),1,fp)==1;i++)
	{
    printf("%6d %8s %8s %8s %8s %8s \n",stu[i].num,stu[i].name,stu[i].shuliang,stu[i].zl,stu[i].place,stu[i].people);;
	}
    printf("-----------------------------------------------------------\n\n");
    fclose(fp);
}
void cuowu()
{
	printf("\n                                                     cuowu\n");
}
void main1()
{
	
	system("color 3F");
	system("cls"); 
	char choice;
printf("\n\n\n\n\n\n\n\n\n\n");
printf("               		            **********************************************\n");
printf("                   		   *                                              * \n");
printf("                   		   *         欢迎来到服装销售管理系统             * \n");
printf("                  		   *                1.  登录                      * \n");
printf("                  		   *                2.  退出                      * \n"); 
printf("                                   *                3.  关于                      * \n");	
printf("                    	           *                                              * \n");
printf("                    	   	    **********************************************\n"); 


choice=getch();
switch(choice)
	{
	case '1':	denglu();break;
	 case '2':	
	 system("cls");printf("\n\n\n\n\n\n\n\n\n\n");

printf("                        **********************************************\n");
printf("                       *                                              * \n");
printf("                       *         欢迎使用服装销售管理系统             * \n");
printf("                       *                                              * \n");
printf("                        **********************************************\n"); 
sleep(1);
 	 exit(0);
 	 case '3':
 	 	system("cls");printf("\n\n\n\n\n\n\n\n\n\n");

 	 	printf("                            ********************************\n");
 	 	printf("                            *   该系统为服装销售管理系统   *     \n");
 	 	printf("                            *       仅系统管理员使用       *  \n");
 	 	printf("                            *           感谢支持           *   \n");
 	 	printf("                            *         按任意键返回         *   \n");
 	 	printf("                            ********************************\n");

 	 	getch();
		  fflush(stdin);
		  main1(); 
	 case '*': cuowu();
	   
 	 	
	default :  
printf("                           		      输入错误，请重新输入!\n");
printf("                                     		  按任意键继续!\n");
				  getch();
				  main1();
				  	  		  	  
   }
}

int main()
{
    SetConsoleTitleA("服装销售系统- V1.0");
 	main1();
}

