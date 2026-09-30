#include <stdio.h>
int main()
{
    int x,one,two,five;//one表示一角
    printf("请输入");
    scanf("%d",&x);
    for(one=1;one<x*10;one++){
        for(two=1;two<x*10/2;two++){
            for(five=1;five<x*10/5;five++){
                                if(one+two*2+five*5==x*10){
                                    printf("需要%d个一角，%d个两角，%d个五角\n",one,two,five);
                                    goto i;
                                }            
            }

        }
    
    }
    i:printf("程序结束");
    return 0;
}