/*显示数组元素个数和各元素的值*/
#include<stdio.h>
int main(void)
{
    int i;
    int a[]={1,2,3,4,5};
    int na=sizeof(a)/sizeof(a[0]);

    printf("数组元素的个数是%d。\n",na);

    for(i=0;i<na;i++)
    printf("a[%d]:%d\n",i,a[i]);

    return 0;
}