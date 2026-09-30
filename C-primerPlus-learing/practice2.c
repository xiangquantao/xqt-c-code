//光年时空·三体
#include <stdio.h>
#include <windows.h>
#define ly_to_AU 63241
char A;
float B;
    int main(void){
        printf("即将开始旅程：三体世界\n");
        printf("loading");
        Sleep(1000);
        printf("·");
        Sleep(800);
        printf("·");
        Sleep(700);
        printf("·");
        Sleep(700);
        printf("·");
        Sleep(600);
        printf("·");
        Sleep(500);
        printf("·\n");       
        Sleep(500);
        printf("光年时空·三体已开启！\n");
        printf("您的初始坐标：银河系猎户座旋臂太阳系！\n");
        printf("是否开始搜索恒星?[填Y或N]:");
        scanf("%s",&A);
        if (A=='Y'){
            printf("最近的恒星：比邻星\n距离太阳4.3光年，");
            B=4.3*ly_to_AU;
            printf("等效天文单位:%.2f",B);
        }
        else{
            printf("敬请期待更新！");
            Sleep(1000);
            printf("游戏结束");
        }
        return 0;
    }