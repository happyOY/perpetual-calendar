#include <stdio.h>
#include "function4.h"
#include <stdlib.h>

#define NONE "\033m"
#define RED "\033[0;32;31m"
#define BLUE "\033[0;32;34m"
#define WHITE "\033[1;37m"
#define PURPLE "\033[0;035m"
#define YELLOW "\033[1;33m"

void function3(int year,int month,int day)
{
	int i,j,k=-1;
	printf("**********************%d��************************\n",year); 
	for(i=0;i<12;i++)
	{
		if(i+1==month)//��ӡ���µ���ɫ�Ͳ��ǵ��µ���ɫ����һ�� 
		{	
			printf("\n");
			printf(RED"===========================%d��======================\n"NONE,i+1);//��ɫ �����£� 
			k=1;
		}
		else
		{
			printf("\n");
			printf(WHITE"===========================%d��======================\n"NONE,i+1);//��ɫ���ǵ��£� 
			k=0;
		}
		function4(year,i+1,day,k); 
	}
 } 
