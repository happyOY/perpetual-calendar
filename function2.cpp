# include<stdio.h>
# include<math.h>
//************************************************************************************************
//floor()向下取整
//************************************************************************************************
int function2(int year,int month,int day,int i)
{
    int num = 0;
	int Y=year,M=month,D=day;
    int a,b;
    // 基姆拉尔森计算公式
    if(month < 3){
        month += 12;
        --year;
    }
    num = year + floor(year/4) - floor(year/100) + floor(year/400) + 2*month + floor(3*(month+1)/5) + day + 1;
    num = num % 7;
    if(i==1)
    {
	printf("%d-%d-%d",Y,M,D);
    switch (num)
    {
    case 0:
        printf("是星期天[Sunday]");break;
    case 1:
        printf("是星期一[Monday]");break;
    case 2:
        printf("是星期二[Tuesday]");break;
    case 3 :
        printf("是星期三[Wednesday]");break;
    case 4 :
        printf("是星期四[Thursday]");break;
    case 5:
        printf("是星期五[Friday]");break;
    case 6:
        printf("是星期六[Saturday]");break;
    }
    printf("\n");
	}
    return num;
}

