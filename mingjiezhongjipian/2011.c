/*把数字字符每次偏移一位显示（其一）*/
#include<stdio.h>
int main(void)
{
    int i,j;
    int x;

    printf("要显示多少行:");
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        for(j=1;j<i;j++)
        putchar(' ');
        printf("%d\n",i%10);
    }
    return 0;
}