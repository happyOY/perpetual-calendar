#include <stdio.h>
#include <stdlib.h>
#include "function1.h" 
#include "function2.h"
#include "function3.h"
#include "function4.h"
#include "UI.h" 

#define NONE "\033m"
#define RED "\033[0;32;31m"
#define BLUE "\033[0;32;34m"
#define WHITE "\033[1;37m"
#define PURPLE "\033[0;035m"
#define YELLOW "\033[1;33m"

int main() 
{
	int year=0,month=0,day=0,a=6,b=-1;
	b=UI();
while(b!=0)
{
	while(a!=5) 
	{
		if(a==6) 
		{
		system("cls"); 
		printf("�����������գ�����(2020 1 15)\n");
		scanf("%d %d %d",&year,&month,&day);
		}
		printf("\n");
		printf("\n");
		printf("======================���������Ҫ��ѯ�Ĺ���=======================\n");
		printf("1.��ѯ��ƽ�� 2.��ѯ���յ������� 3.��ӡ���µ����� 4��ӡ��������� 5.�˳���ѯ 6.������ѯ\n");
		scanf("%d",&a);
		while(a<1||a>6)
		{
			printf("����Ƿ���������\n"); 
			scanf("%d",&a);
		} 
		switch(a)
		{
			case 1:function1(year,month,day,1);break;
			case 2:function2(year,month,day,1);break;
			case 3:function4(year,month,day,1);break;
			case 4:function3(year,month,day);break;
			case 5:b=UI();a=6;break;
			case 6:break; 
		}	
		if(b==0)
		break;
	}
}
	return 0;
}















