#include <windows.h> 
#include <stdio.h>
#include <stdlib.h>
//#define width 125     // ���ڿ��
//#define height 45   // ���ڳ���

// �Զ��庯������
void setposition(int y, int x)
{
    COORD coord;
    coord.X = x; 
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int UI()  
{  
    int hang = 5;
    int lie = 40;
    int a=-1;
    system("mode con cols=125 lines=45"); // ����̨��СΪ125*45 
    system("color 57"); // �����ɫ��������ɫ
    while(a!=1)
    {
	setposition(hang, lie); // �ӵ�5�е�40�п�ʼ��� 
    hang++; // ��һ����ͬ����� 
    printf(" ������������������������������������������������������������������������");setposition(hang, lie);hang++;
    printf("                  ����                       ");setposition(hang, lie);hang++;
    printf("                  ����                       ");setposition(hang, lie);hang++;
    printf(" ������������������������������������������������������������������������");setposition(hang, lie);hang++;
    printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
    printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf(" ����       ����              ����       ����");setposition(hang, lie);hang++;
	printf("          ����              ����       ");setposition(hang, lie);hang++;
	printf("          ����              ����       ");setposition(hang, lie);hang++;
    printf("          ����              ����       ");setposition(hang, lie);hang++;
    printf(" ������������������������������������������������������������������������");setposition(hang, lie);hang++;
    hang++;
    hang++;
	printf("\n");setposition(hang, lie);hang++;
    printf("   ��  ӭ  ʹ  ��  ��  ��  ��  ϵ  ͳ ");setposition(hang, lie);hang++;
    printf("\n");setposition(hang, lie);hang++;
    printf("   ----------------------------------");setposition(hang, lie);hang++;
    printf("       ��  ��  1   ��  ��  ϵ  ͳ");setposition(hang, lie);hang++;
    printf("\n");setposition(hang, lie);hang++;
    printf("       ��  ��  0   ��  ��  ϵ  ͳ");setposition(hang, lie);hang++;
    printf("   ----------------------------------");setposition(hang, lie);hang++;
    printf("\n");
    scanf("%d",&a); 
	if(a==0)
	{
		break;
	}
    if(a==1)
    {
    	system("cls");//ϵͳ���� 
    	system("color 0E");
    	system("mode con cols=125 lines=180");
	}
	else
	{
	system("cls");//ϵͳ���� 
	hang=5;
	lie=40;
	}
	}
	return a;
}



