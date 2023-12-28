/*输入的整数是否为零*/
#include<stdio.h>
int main(void)
{
    int num;

    printf("请输入一个整数:");
    scanf("%d",&num);

    if(num)
    puts("该整数不是零。");
    else
    puts("该整数是零。");

    return 0;
}