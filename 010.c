/*读取两个整数的值，然后显示出它们的和、差、积、商和余数*/
#include<stdio.h>
int main(void){

    int vx,vy;

    puts("请输入两个整数。");
    printf("整数vx:"); scanf("%d",&vx);
    printf("整数vy:"); scanf("%d",&vy);

    printf("vx+vy=%d\n",vx+vy);
    printf("vx-vy=%d\n",vx-vy);
    printf("vx*vy=%d\n",vx*vy);
    printf("vx/vy=%d\n",vx/vy);
    printf("vx%%vy=%d\n",vx%vy);

    return 0;
}