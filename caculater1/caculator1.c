#include <stdio.h>
#include <stdlib.h>
int main(void)
{   system("chcp 65001>nul");
    float w=0;
    printf("说明：本计算器保留2位小数\n");
    do{
    float m;
    printf("请输入你想要的数字:");
    scanf("%f",&m);
    float n;
    printf("请输入你想要计算的数字二:");
    scanf("%f",&n);
    char way;
    printf ("请输入你想要的运算符号:");
    scanf(" %c",&way);
    if (way=='+'){
        printf("%.2f",(float)m+n);
    }else if(way=='-'){
        printf("%.2f",(float)m-n);
    }else if(way=='*'){
        printf("%.2f",(float)m*n);
    }else if(way=='/'){
        if(n!=0){
        printf("%.2f",(float)m/n);
        }else{
            printf("除数不能为零，请重新输入");
        }
    }
    printf("\n感谢您使用计算器1.5\n");
    w++;
    }while(w<5);
        return 0;
    
}