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
	printf("**********************%d年************************\n",year); 
	for(i=0;i<12;i++)
	{
		if(i+1==month)//打印当月的颜色和不是当月的颜色区分一下 
		{	
			printf("\n");
			printf(RED"===========================%d月======================\n"NONE,i+1);//红色 （当月） 
			k=1;
		}
		else
		{
			printf("\n");
			printf(WHITE"===========================%d月======================\n"NONE,i+1);//白色（非当月） 
			k=0;
		}
		function4(year,i+1,day,k); 
	}
 } 
