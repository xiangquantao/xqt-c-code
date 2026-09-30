#include <stdio.h>
#define pre_year_day 365
#define pre_day_hour 24
#define pre_hour_second 3600
    long long m;/*定义要输入的年数*/
    long long day;/*定义要求取的天数*/
    long long hour;
    long long second;
    int main(void){  
        printf("add your years:");
        scanf("%d",&m);
        day=m*pre_year_day;
        hour=m*pre_year_day*pre_day_hour;
        second=m*pre_year_day*pre_day_hour*pre_hour_second;  
        printf(" days:%lld,honour:%lld,second:%lld",day,hour,second);
        return 0;
    }


