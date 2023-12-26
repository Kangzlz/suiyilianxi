/*读取两个实数值，用实数显示它们的和、差、积、商*/
#include<stdio.h>
int main(void)
{
    double vx,vy;

    puts("请输入两个实数。");
    printf("实数vx:"); scanf("%lf",&vx);
    printf("实数vy:"); scanf("%lf",&vy);

    printf("vx+vy=%f\n",vx+vy);
    printf("vx-vy=%f\n",vx-vy);
    printf("vx*vy=%f\n",vx*vy);
    printf("vx/vy=%f\n",vx/vy);

    return 0;
}