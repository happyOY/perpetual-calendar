#include <windows.h> 
#include <stdio.h>
#include <stdlib.h>
//#define width 125     // 窗口宽度
//#define height 45   // 窗口长度

// 自定义函数声明
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
    system("mode con cols=125 lines=45"); // 控制台大小为125*45 
    system("color 57"); // 字体白色，背景紫色
    while(a!=1)
    {
	setposition(hang, lie); // 从第5行第40列开始输出 
    hang++; // 下一行相同列输出 
    printf(" ████████████████████████████████████");setposition(hang, lie);hang++;
    printf("                  ██                       ");setposition(hang, lie);hang++;
    printf("                  ██                       ");setposition(hang, lie);hang++;
    printf(" ████████████████████████████████████");setposition(hang, lie);hang++;
    printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
    printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf(" ██       ██              ██       ██");setposition(hang, lie);hang++;
	printf("          ██              ██       ");setposition(hang, lie);hang++;
	printf("          ██              ██       ");setposition(hang, lie);hang++;
    printf("          ██              ██       ");setposition(hang, lie);hang++;
    printf(" ████████████████████████████████████");setposition(hang, lie);hang++;
    hang++;
    hang++;
	printf("\n");setposition(hang, lie);hang++;
    printf("   欢  迎  使  用  万  年  历  系  统 ");setposition(hang, lie);hang++;
    printf("\n");setposition(hang, lie);hang++;
    printf("   ----------------------------------");setposition(hang, lie);hang++;
    printf("       按  下  1   进  入  系  统");setposition(hang, lie);hang++;
    printf("\n");setposition(hang, lie);hang++;
    printf("       按  下  0   退  出  系  统");setposition(hang, lie);hang++;
    printf("   ----------------------------------");setposition(hang, lie);hang++;
    printf("\n");
    scanf("%d",&a); 
	if(a==0)
	{
		break;
	}
    if(a==1)
    {
    	system("cls");//系统清屏 
    	system("color 0E");
    	system("mode con cols=125 lines=180");
	}
	else
	{
	system("cls");//系统清屏 
	hang=5;
	lie=40;
	}
	}
	return a;
}



