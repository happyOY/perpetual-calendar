#include <stdio.h>
#include <stdlib.h>
#include "function1.h"
#include "function2.h"

#define NONE "\033m"
#define RED "\033[0;32;31m"
#define BLUE "\033[0;32;34m"
#define WHITE "\033[1;37m"
#define PURPLE "\033[0;035m"
#define YELLOW "\033[1;33m"

void function4(int year,int month,int day,int pp)
{
	int week,k1,i,j,k2,k0,month_day,r1,k;
	int M[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
	r1=function1(year,month,day,0);
	week=function2(year,month,1,0);
	if (month==2&&r1)
	month_day=M[month-1]+1;
	else
	month_day=M[month-1];
    printf(PURPLE"星期一	星期二	星期三	星期四	星期五	星期六	星期日 \n"NONE);
	k1=0;
	for(j=1;j<week;j++)
	{
		printf("      	");
		k1++;
	}
	k2=0;
	for(i=1;i<=7-k1;i++)
	{
		if (i==day)
		{
			if(pp==0)
			printf(WHITE"   %d  	"NONE,i);//当天不当月//白色 
			else
			printf(RED"   %d  	"NONE,i);//当天当月//红色 
		}
		else
		{
			if(pp==0)
			printf(WHITE"   %d  	"NONE,i);//不是当天不是当月 //白色 
			else
			printf(BLUE"   %d  	"NONE,i);//不是当天是当月 // 
		}
		k2++;
	}
	printf("\n");
	k0=0;
	for (k=k2+1;k<=month_day;k++)
	{
		if (k<10)
		{
			printf(" ");
		}
		if (k==day)
		{
			if(pp==0)
			printf(WHITE"  %d  	"NONE,k);//当天不当月 
			else
			printf(RED"  %d  	"NONE,k);//当天当月 
		}
		else
		{
			if(pp==0)
			printf(WHITE"  %d  	"NONE,k);//不是当天不是当月 
			else
			printf(BLUE"  %d  	"NONE,k);//不是当天是当月 
		}
	k0+=1;
	if(k0%7==0)
	printf("\n");
	} 
	printf(YELLOW"  \n"NONE);			
}

