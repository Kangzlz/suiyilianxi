/*显示当前日期和时间（其三：利用ctime函数）*/
#include<stdio.h>
#include<time.h>
int main(void)
{
    time_t current=time(NULL);

    printf("当前日期和时间:%s",ctime(&current));

    return 0;
}