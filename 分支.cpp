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
	int num;/*��¼��*/
	char name[100];/*��Ʒ��*/
	char shuliang[100];/*������λ*/
	char zl[100];/*�������*/
	char place[100];/*λ��*/
	char people[100];/*������*/
}stu[MAX];

struct huiyuan
{
	int num;/*���*/
	char name[100];/*����*/
	char sex[100];/*�Ա�*/
	char phone[100];/*�绰*/
	char dengji[100];/*�ȼ�*/
	char score[100];/*����*/
}shui[max];

void huiyuan()
{   
    system("cls");
    void glxt();//����ϵͳ 
    void main1(); //������ 
	void Input1();/*����*/
	void Display1();/*���*/
	void Find1();/*����*/
	void del();/*ɾ��*/
	void Change1();/*�޸�*/
	int n;
    for(;;)
	{    system("cls");

		printf("\n");printf("\n\n\n");
        printf("             ��������������������������������������������������������������\n");
        printf("             ��                                                          ��\n");
        printf("             ��                     ��ӭ������Աϵͳ                      ��\n");
        printf("             ��                                                          ��\n");
        printf("             ��                                                          ��\n");
		printf("             ��                          ���˵�                          ��\n");
		printf("             ��                                                          ��\n");
        printf("             ��                   ��1.��Ա��Ϣ¼��  ��                   ��\n");        
		printf("             ��                                                          ��\n");
		printf("             ��                   ��2.��Ա��Ϣ���  ��                   ��\n");
        printf("             ��                                                          ��\n");
		printf("             ��                   ��3.��Ա��Ϣ��ѯ  ��                   ��\n");          
		printf("             ��                                                          ��\n");
		printf("             ��                   ��4.��Ա��Ϣɾ��  ��                   ��\n");
	    printf("             ��                                                          ��\n");
		printf("             ��                   ��5.��Ա��Ϣ�޸�  ��                   ��\n");
        printf("             ��                                                          ��\n");
		printf("             ��                   ��6.�˳�ϵͳ      ��                   ��\n"); 
        printf("             ��                                                          ��\n");
        printf("             ��������������������������������������������������������������\n\n");
        printf("                               ������ѡ����(1-6):");
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
			          printf("                      ������������������������������������������������\n");
                      printf("                      ��                                            ��\n");
                      printf("                      ��                  �˳���!                   ��\n");
                      printf("                      ��                                            ��\n");
                      printf("                      ������������������������������������������������\n");
	sleep(2);
                      glxt(); 
			}
		}
        else 
		{
    system("cls");printf("\n\n\n");
			          printf("                      ������������������������������������������������\n");
                      printf("                      ��                                            ��\n");
                      printf("                      ��                  �������!                 ��\n");
                      printf("                      ��                                            ��\n");
                      printf("                      ������������������������������������������������\n");
	sleep(2);
	        huiyuan(); 
		}
	}
}

void Find1()/*����*/
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
		printf("��1��������\n");
		printf("�������˵�(��������)\n");
		scanf("%d",&choose);
		if(choose==1)
		{
			printf("��������������\n");
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
			if(t==-1) printf("�����ڸ���Ϣ\n");
		}
	    
		else return;
	}while(1);
}


void Display1()/*���*/
{
	system("cls");
	FILE *fp;
    int i;
    fp=fopen("vip","a+");                       
    printf("������������������������������������������������������������\n");
    printf("                      �б�\n");
    printf("-----------------------------------------------------------\n");
    printf("���   ����    �Ա�  �绰  ��Ա�ȼ�  ����   ");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&shui[i],sizeof(struct huiyuan),1,fp)==1;i++)
	{
		printf("%6d %8s %8s %8s %8s %8s \n",shui[i].num,shui[i].name,shui[i].sex,shui[i].phone,shui[i].dengji,shui[i].score);
	}
	
	getch();
	fflush(stdin);
	fclose(fp);
}


void Input1()/*����*/
{   
       system("cls");

	FILE *fp;
	int n;
	fp=fopen("vip","a+"); 
	for(n=0;n<max;n++)
	{
		printf("n=%d �������n(������n=-1ʱ,����),n=",n++);
        scanf("%d",&n);
		if(n==-1) 
		{
		    fclose(fp);
			return;
		}
		else
		{
			printf("��������   ����    �Ա�  �绰  ��Ա�ȼ�  ����\n");
			scanf("%d%s%s%s%s%s",&shui[n].num,shui[n].name,shui[n].sex,shui[n].phone,shui[n].dengji,shui[n].score);
	        fwrite(&shui[n],sizeof(struct huiyuan),1,fp);
		}
	}
	fclose(fp);
}

void del()/*ɾ��*/
{
	    system("cls");

	FILE *fp;
	int i,flag,n,s,j;    
     fp=fopen("vip","a+");     
    rewind(fp);
     printf("                      �б�\n");
    printf("-----------------------------------------------------------\n");
    printf("���   ����    �Ա�  �绰  ��Ա�ȼ�  ����\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&shui[i],sizeof(struct huiyuan),1,fp)==1;i++)
	{
  printf("%6d %8s %8s %8s %8s %8s \n",shui[i].num,shui[i].name,shui[i].sex,shui[i].phone,shui[i].dengji,shui[i].score);
    printf("\n");
	} 
	n=i;
	printf("�����ɾ�����:\n");
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
	    printf("û�д˺�\n");
	fp=fopen("vip","w+");
	for(i=0;i<n;i++)
		fwrite(&shui[i],sizeof(struct  huiyuan),1,fp);
    fclose(fp);
/*	fp=fopen("vip","r");   
    printf("                      �б�\n");
    printf("-----------------------------------------------------------\n");
    printf("���   ����    �Ա�  �绰  ��Ա�ȼ�  ����\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;i<n;i++)
	{
    fread(&shui[i],sizeof(struct huiyuan),1,fp);
      printf("%6d %8s %8s %8s %8s  \n",shui[i].num,shui[i].name,shui[i].sex,shui[i].phone,shui[i].dengji,shui[i].score);
    printf("\n");
	}
    fclose(fp);*/
}	
	

void Change1()/*�޸�*/
{ 
    system("cls");

	FILE *fp;
    int i,num,n;
    int flag=0;    
    printf("������Ҫ�޸ĵı��:");
    scanf("%d",&num);
    for(i=0;i<=max;i++)
    if(shui[i].num==num)
	{
        printf("                      �б�\n");
        printf("-----------------------------------------------------------\n");
        printf("���   ����    �Ա�  �绰  ��Ա�ȼ�  ����\n");
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
		printf("������������������������������������������������������������\n");       
		 printf("                         !\n");

        printf("                        �������!\n");
        printf("                         !\n");
        printf("������������������������������������������������������������\n");
	sleep(2);
        return;
    }
    printf("\n\n\n");  
    fp=fopen("vip","a+");
    fseek(fp,n*sizeof(struct huiyuan),0);
    printf("���   ����    �Ա�  �绰  ��Ա�ȼ�  ����\n");
    scanf("%d%s%s%s%s%s",&shui[n].num,shui[n].name,shui[n].sex,shui[n].phone,shui[n].dengji,shui[n].score); 
    fwrite(&shui[i],sizeof(struct huiyuan),1,fp);
    fclose(fp);
    fp=fopen("vip","a+");
    printf("                      ͼ���б�\n");
    printf("-----------------------------------------------------------\n");
    printf("���   ����    �Ա�  �绰  ��Ա�ȼ�  ����\n");
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
		printf("\nϵͳ��ʧ�ܣ�\n");
		exit(0);
	}
	    fgets(m,16,fp);
	    fclose(fp);printf("\n\n\n");
	   	printf("     *************�޸��������************\n"); 
	   	printf("     **************����Q�˳�**************\n"); 

	  	printf("     *����������룺");
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
	  	printf("     *�����������룺");
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
	  	printf("     *�ٴ����������룺");
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
		printf("\nϵͳ��ʧ�ܣ�\n");
		exit(0);
	}
	    
              	fputs(b,fp);
              	fclose(fp);
              	printf("              --------------�����޸ĳɹ�");
              	f=0;
				 getch() ;
			  }
			  else
			  {
			  	
		printf("    ----------���벻һ�£������������������\n\n");
		getch();
		fflush(stdin); 
			  }
		}
			

	}else
	{
    printf("���������");
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
	printf("                          *          1.��Ա����            *\n");
	printf("                          *          2.���۹���            *\n");	
	printf("                          *          3.����Ա�޸�����      *\n");		
	printf("                          *          4.�˳�                *         \n");	
	printf("                          **********************************\n\n");	
	printf("                                     ������ѡ�� ��1-4��");
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
				  	 
				  	printf("�������");
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
		printf("\nϵͳ��ʧ�ܣ�\n");
		exit(0);
	}
	    fgets(k,16,fp) ;
	   	printf("     *************��¼ϵͳ************\n"); 
	  	printf("     ***********��Q���س��˳�*********\n"); 
	  	printf("     *�������˺ţ�"); 
		 
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
        
        printf("     *���������룺");        
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
			printf("�������");
			getche();
			fclose(fp);
			denglu();
			}
		}
		else 
		{
			
			printf("�������");
			getche();
			fclose(fp);
			denglu();
		}
		} 
		else 
		{
			printf("�˺Ŵ���");
			getche();
			fclose(fp);
			denglu();
		}
   
}


void fuzhuang()//
{
	system("cls");
	void main1();  
	void Input();/*����*/
	void Display();/*���*/
	void Find();/*����*/
	void delet();/*ɾ��*/
	void Change();/*�޸�*/
	int n;
    for(;;)
	{    system("cls");

		printf("\n");printf("\n\n\n\n\n\n\n\n\n\n");

        printf("                 ��������������������������������������������������������������\n");
        printf("                 ��                                                          ��\n");
        printf("                 ��                 ��ӭ������װ��Ϣ����ϵͳ                 ��\n");
        printf("                 ��                                                          ��\n");
        printf("                 ��                                                          ��\n");
		printf("                 ��                          ���˵�                          ��\n");
		printf("                 ��                                                          ��\n");
        printf("                 ��                   ��1.��װ��Ϣ¼��  ��                   ��\n");        
		printf("                 ��                                                          ��\n");
		printf("                 ��                   ��2.��װ��Ϣ���  ��                   ��\n");
        printf("                 ��                                                          ��\n");
		printf("                 ��                   ��3.��װ��Ϣ��ѯ  ��                   ��\n");          
		printf("                 ��                                                          ��\n");
		printf("                 ��                   ��4.��װϢɾ��    ��                   ��\n");
	    printf("                 ��                                                          ��\n");
		printf("                 ��                   ��5��װ��Ϣ�޸�   ��                   ��\n");
        printf("                 ��                                                          ��\n");
		printf("                 ��                   ��6.�˳�ϵͳ      ��                   ��\n"); 
        printf("                 ��                                                          ��\n");
        printf("                 ��������������������������������������������������������������\n\n");
        printf("                                       ������ѡ����(1-6):");
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

			printf("������������������������������������������������\n");
            printf("��                                            ��\n");
            printf("��                  �������!                 ��\n");
            printf("��                                            ��\n");
            printf("������������������������������������������������\n");
	sleep(2);
		}
	}
}

void Find()/*����*/
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
		printf("����1.����Ʒ������\n");
		printf("�������˵�(��������)\n");
		scanf("%d",&choose);
		if(choose==1)
		{
			printf("��������Ʒ����\n");
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
			if(t==-1) printf("�����ڸ���Ϣ\n");
		}
		
		else return;
	}while(1);
	getch();
	fflush(stdin);
}


void Display()/*���*/
{
	    system("cls");

	FILE *fp;
    int i;
    fp=fopen("fuzhuang","a+");                       
    printf("������������������������������������������������������������\n");
    printf("                     �б�\n");
    printf("-----------------------------------------------------------\n");
    printf("��¼��    ��Ʒ    ������λ   ����    λ��   ������\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&stu[i],sizeof(struct fuzhuang),1,fp)==1;i++)
	{
		printf("%6d %8s %8s %8s %8s %8s\n",stu[i].num,stu[i].name,stu[i].shuliang,stu[i].zl,stu[i].place,stu[i].people);
	}
	fclose(fp);
	getch();
	fflush(stdin);
}


void Input()/*����*/
{
	    system("cls");

	FILE *fp;
	int n;
	fp=fopen("fuzhuang","a+"); 
	for(n=0;n<MAX;n++)
	{
		printf("n=%d �������n(������n=-1ʱ,����),n=",n++);
        scanf("%d",&n);
		if(n==-1) 
		{
		    fclose(fp);
			return;
		}
		else
		{
			printf("  ��¼��    ��Ʒ    ������λ   ����    λ��   ������\n");
			scanf("%d%s%s%s%s%s",&stu[n].num,stu[n].name,stu[n].shuliang,stu[n].zl,stu[n].place,stu[n].people);
	        fwrite(&stu[n],sizeof(struct fuzhuang),1,fp);
		}
	}
	fclose(fp);
}

void delet()/*ɾ��*/
{
	    system("cls");

	FILE *fp;
	int i,flag,n,s,j;    
     fp=fopen("fuzhuang","a+");     
    rewind(fp);
     printf("                      �б�\n");
    printf("-----------------------------------------------------------\n");
    printf("  ��¼��    ��Ʒ    ������λ   ����    λ��   ������\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;fread(&stu[i],sizeof(struct fuzhuang),1,fp)==1;i++)
	{
  printf("%6d %8s %8s %8s %8s %8s \n",stu[i].num,stu[i].name,stu[i].shuliang,stu[i].zl,stu[i].place,stu[i].people);
    printf("\n");
	} 
	n=i;
	printf("�����ɾ����¼��:\n");
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
	    printf("û�д˺�\n");
	fp=fopen("fuzhuang","w+");
	for(i=0;i<n;i++)
		fwrite(&stu[i],sizeof(struct  fuzhuang),1,fp);
    fclose(fp);
	fp=fopen("fuzhuang","a+");   
    printf("                     �б�\n");
    printf("-----------------------------------------------------------\n");
    printf("  ��¼��    ��Ʒ    ������λ   ����    λ��   ������\n");
    printf("-----------------------------------------------------------\n");
    for(i=0;i<n;i++)
	{
    fread(&stu[i],sizeof(struct fuzhuang),1,fp);
      printf("%6d %8s %8s %8s %8s %8s \n",stu[i].num,stu[i].name,stu[i].shuliang,stu[i].zl,stu[i].place,stu[i].people);
    printf("\n");
	}
    fclose(fp);
}	
	

void Change()/*�޸�*/
{ 
    system("cls");

	FILE *fp;
    int i,num,n;
    int flag=0;    
    printf("������Ҫ�޸ĵĵ�¼��:");
    scanf("%d",&num);
    for(i=0;i<=MAX;i++)
    if(stu[i].num==num)
	{
        printf("                      �б�\n");
        printf("-----------------------------------------------------------\n");
        printf("  ��¼��    ��Ʒ    ������λ   ����    λ��   ������\n");
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
		printf("������������������������������������������������������������\n");
        printf("                        �������!\n");
        printf("                         !\n");
        printf("������������������������������������������������������������\n");
	sleep(2);
        return;
    }
    printf("\n\n\n");  
    fp=fopen("fuzhuang","a+");
    fseek(fp,n*sizeof(struct fuzhuang),0);
    printf("��¼��    ��Ʒ    ������λ   ����    λ��   ������\n");
    scanf("%d%s%s%s%s%s",&stu[n].num,stu[n].name,stu[n].shuliang,stu[n].zl,stu[n].place,stu[n].people); 
    fwrite(&stu[i],sizeof(struct fuzhuang),1,fp);
    fclose(fp);
    fp=fopen("fuzhuang","rb");
    printf("                      �б�\n");
    printf("-----------------------------------------------------------\n");
    printf("  ��¼��    ��Ʒ    ������λ   ����    λ��   ������\n");
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
printf("                   		   *         ��ӭ������װ���۹���ϵͳ             * \n");
printf("                  		   *                1.  ��¼                      * \n");
printf("                  		   *                2.  �˳�                      * \n"); 
printf("                                   *                3.  ����                      * \n");	
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
printf("                       *         ��ӭʹ�÷�װ���۹���ϵͳ             * \n");
printf("                       *                                              * \n");
printf("                        **********************************************\n"); 
sleep(1);
 	 exit(0);
 	 case '3':
 	 	system("cls");printf("\n\n\n\n\n\n\n\n\n\n");

 	 	printf("                            ********************************\n");
 	 	printf("                            *   ��ϵͳΪ��װ���۹���ϵͳ   *     \n");
 	 	printf("                            *       ��ϵͳ����Աʹ��       *  \n");
 	 	printf("                            *           ��л֧��           *   \n");
 	 	printf("                            *         �����������         *   \n");
 	 	printf("                            ********************************\n");

 	 	getch();
		  fflush(stdin);
		  main1(); 
	 case '*': cuowu();
	   
 	 	
	default :  
printf("                           		      �����������������!\n");
printf("                                     		  �����������!\n");
				  getch();
				  main1();
				  	  		  	  
   }
}

int main()
{
    SetConsoleTitleA("��װ����ϵͳ- V1.0");
 	main1();
}

