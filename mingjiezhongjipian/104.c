/*生成随机数（其一）*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int rettry;

    printf("在这个编程环境中能够生成0~%d的随机数。\n",RAND_MAX);

    do{
        printf("\n生成了随机数%d。\n",rand());

        printf("在运行一次?---(0)否(1)是:");
        scanf("%d",&rettry);
    }while(rettry==1);

    return 0;
}