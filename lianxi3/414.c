/*显示输入的整数值以下的偶数*/
#include<stdio.h>
int main(void)
{
    int i,no;

    printf("整数值:");
    scanf("%d",&no);

    for(i=2;i<=no;i+=2)
    printf("%d ",i);
    putchar('\n');

    return 0;
}