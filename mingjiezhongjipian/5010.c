/*读取想要的数量，把最后10个存入元素个数为10的数组（其二）*/
#include<stdio.h>
#define MAX 10
int main(void)
{
    int i;
    int a[MAX];
    int cnt=0;
    int retry;

    printf("请输入整数。\n");

    do{
        printf("第%d个整数:",cnt+1);
        scanf("%d",&a[cnt++%MAX]);

        printf("是否继续?(Yes···1/No···0):");
        scanf("%d",&retry);
    }while(retry==1);

    i=cnt-MAX;
    if(i<0) i=0;

    for(;i<cnt;i++)
    printf("第%d个:%d\n",i+1,a[i%MAX]);

    return 0;
}