#include  <stdio.h>
//数字逆序
int main(){
    int x,digit,memory;
    for(int n = 0;n < 9;n++){
        printf("please write your number：");
        scanf("%d",&x);
        if(x<0){
            printf("-");
            x = -x;
        }
        while(x != 0 && x % 10 ==0){
            x =x /10;
        }
        do{
            digit=x%10;  
            printf("%d",digit);                
            x=x/10;
        }while(x>0);
        printf("\n");
    }
    return 0;
}