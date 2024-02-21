/*显示日期和时间（其二：利用asctime函数）*/
#include<stdio.h>
#include<time.h>
int main(void)
{
    time_t current=time(NULL);

    printf("当前日期和时间是：%s",asctime(localtime(&current)));

    return 0;
}