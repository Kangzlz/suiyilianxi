/*将两个实数值进行互换*/
#include<stdio.h>
void swap(double *px,double *py)
{
    double temp=*px;
    *px=*py;
    *py=temp;
}
int main(void)
{
    double da,db;

    puts("请输入两个实数。");
    printf("实数A:"); scanf("%lf",&da);
    printf("实数B:"); scanf("%lf",&db);

    swap(&da,&db);

    puts("互换了两数的值。");
    printf("实数A是%f。\n",da);
    printf("实数B是%f。\n",db);

    return 0;
}