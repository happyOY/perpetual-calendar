# include<stdio.h>
# include<math.h>
//************************************************************************************************
//floor()����ȡ��
//************************************************************************************************
int function2(int year,int month,int day,int i)
{
    int num = 0;
	int Y=year,M=month,D=day;
    int a,b;
    // ��ķ����ɭ���㹫ʽ
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
        printf("��������[Sunday]");break;
    case 1:
        printf("������һ[Monday]");break;
    case 2:
        printf("�����ڶ�[Tuesday]");break;
    case 3 :
        printf("��������[Wednesday]");break;
    case 4 :
        printf("��������[Thursday]");break;
    case 5:
        printf("��������[Friday]");break;
    case 6:
        printf("��������[Saturday]");break;
    }
    printf("\n");
	}
    return num;
}

