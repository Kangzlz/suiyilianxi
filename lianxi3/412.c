/*输入一个整数，连续显示出该整数个*（使用for语句）*/
#include<stdio.h>
int main(void)
{
    int i,no;
    
    printf("正整数:");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    putchar('*');
    putchar('\n');

    return 0;
}