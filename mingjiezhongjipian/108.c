/*猜数游戏（其五：显示输入记录）*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX_STAGE 10
int main(void)
{
    int i;
    int no;
    int stage;
    int ans;
    int num[MAX_STAGE];

    srand(time(NULL));
    ans=rand()%1000;

    printf("请猜一个0~999的整数。\n\n");

    stage=0;
    do{
        printf("还剩%d次机会。是多少呢:",MAX_STAGE-stage);
        scanf("%d",&no);
        num[stage++]=no;

        if(no>ans)
        printf("\a再小一点。\n");
        else if(no<ans)
        printf("\a再大一点。\n");
    }while(no!=ans&&stage<MAX_STAGE);

    if(no!=ans)
    printf("很遗憾。正确答案是%d。\n",ans);
    else{
        printf("回答正确。\n");
        printf("用了%d次猜中了。\n",stage);
    }

    puts("\n--- 输入记录 ---");
    for(i=0;i<stage;i++)
    printf("%2d:%4d %+4d\n",i+1,num[i],num[i]-ans);

    return 0;
}