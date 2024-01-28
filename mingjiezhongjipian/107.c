/*猜数游戏（其四：限制猜数次数）*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
    int no;
    int ans;
    const int max_stage=10;
    int remain=max_stage;

    srand(time(NULL));
    ans=rand()%1000;

    printf("请猜一个0~999的整数。\n\n");

    do{
        printf("还剩%d次机会。是多少呢:",remain);
        scanf("%d",&no);
        remain--;

        if(no>ans)
        printf("\a再小一点。\n");
        else if(no<ans)
        printf("\a再大一点。\n");
    }while(no!=ans&&remain>0);

    if(no!=ans)
    printf("\a很遗憾正确答案是%d。\n",ans);
    else{  
    printf("回答正确。\n");
    printf("您用了%d次猜中。\n",max_stage-remain);
    }

    return 0;
}