#include<stdio.h>
int main(void)
{
    int i,no;
    float value;
    float sum=0.0f;

    puts("对浮点数进行多次加法运算。");
    printf("值"); scanf("%f",&value);
    printf("次数"); scanf("%d",&no);

    for(i=0;i<no;i++)
    sum+=value;
    printf("加法运算的结果是%f。\n",sum);

    return 0;
}