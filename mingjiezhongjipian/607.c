/*心算能力检测（计算连加4个0~99的整数所需要的时间）*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
    int a,b,c,d;
    int x;
    time_t start,end;

    srand(time(NULL));

    a=rand()%100;
    b=rand()%100;
    c=rand()%100;
    d=rand()%100;

    printf("%d+%d+%d+%d等于多少:",a,b,c,d);
    
    start=time(NULL);

    while(1){
        scanf("%d",&x);
        if(x==a+b+c+d)
        break;
        printf("\a回答错误!!\n请重新输入:");
    }

    end=time(NULL);

    printf("用时%.1f秒。\n",difftime(end,start));

    return 0;
}