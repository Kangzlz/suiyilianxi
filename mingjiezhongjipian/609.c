/*求星期（其一：利用mktime函数）*/
#include<stdio.h>
#include<time.h>
int dayofweek(int year,int month,int day)
{
    struct tm t;

    t.tm_year=year-1900;
    t.tm_mon=month-1;
    t.tm_mday=day;
    t.tm_hour=0;
    t.tm_min=0;
    t.tm_sec=0;
    t.tm_isdst=-1;

    if(mktime(&t)==(time_t)-1)
    return -1;
    return t.tm_wday;
}
int main(void)
{
    int y,m,d,w;
    char *ws[]={"日","一","二","三","四","五","六"};

    printf("求星期。\n");
    printf("年："); scanf("%d",&y);
    printf("月："); scanf("%d",&m);
    printf("日："); scanf("%d",&d);

    w=dayofweek(y,m,d);

    if(w!=-1)
    printf("这一天是星期%s。\n",ws[w]);
    else
    printf("无法求出星期。\n");

    return 0;
}