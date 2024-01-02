/*从输入的整数开始倒数到零*/
#include<stdio.h>
int main(void)
{
    int no;

    printf("请输入一个整数:");
    scanf("%d",&no);

    while(no>=0){
        printf("%d ",no);
        no--;
    }
    putchar('\n');

    return 0;
}