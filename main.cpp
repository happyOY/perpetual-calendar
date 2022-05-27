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
		printf("请输入年月日，例如(2020 1 15)\n");
		scanf("%d %d %d",&year,&month,&day);
		}
		printf("\n");
		printf("\n");
		printf("======================请输入具体要查询的功能=======================\n");
		printf("1.查询闰平年 2.查询该日的星期数 3.打印该月的月历 4打印该年的年历 5.退出查询 6.继续查询\n");
		scanf("%d",&a);
		while(a<1||a>6)
		{
			printf("输入非法，请重输\n"); 
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















