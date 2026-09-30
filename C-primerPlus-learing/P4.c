#include <stdio.h>//找零计算器
int main(void){
    int price=0;
    int bill=0;
    printf("请输入金额：");
    scanf("%d",&price);
    printf("请输入票面：");
    scanf("%d",&bill);
    if (bill>price){
        printf("应找金额：%d\n",bill-price);
    }
    else if (bill==price){
        printf("无需找零");
    }
    else {
        printf("您的钱不够,需要再补%d\n",price-bill);
    }   
    return 0;
}