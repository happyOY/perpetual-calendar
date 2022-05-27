#include<stdio.h>
int function1(int year,int month,int day,int i)
{
	int y;
	y=year;
	if((y%4==0)&&(y%100!=0)||(y%400==0))
	{
		if(i==1)
	printf("%d是闰年\n",y);
	return 1;
	}
	else
	{
		if(i==1)
		printf("%d是平年\n",y);
		return 0;
	}
}

