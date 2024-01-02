/*显示输入的整数值的所有约数*/
#include<stdio.h>
int main(void)
{
    int i,no;

    printf("整数值:");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    if(no%i==0)
    printf("%d ",i);
    putchar('\n');

    return 0;
}