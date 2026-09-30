#include <stdio.h>//luck number
int main(void){
    int c1,c2,m;
    printf("请输入数字1：");
    scanf("%d",&c1);
    printf("请输入数字2：");
    scanf("%d",&c2);
    if(c1==c2) {
        m=c2/3;
        printf("获得幸运数%d\n",m);
    }
    else printf("失败\n");
        return 0;
}