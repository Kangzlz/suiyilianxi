/*单纯记忆训练（记忆英文字母·其二：记忆大写字母和小写字母）*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STAGE 10
#define LEVEL_MIN 3
#define LEVEL_MAX 20

int sleep(unsigned long x)
{
    clock_t c1=clock(),c2;
    do{
        if((c2=clock())==(clock_t)-1)
        return 0;
    }while(1000.0*(c2-c1)/CLOCKS_PER_SEC<x);
    return 1;
}
int main(void)
{
    int stage,i;
    int success=0;
    int level;
    clock_t start,end;
    const char ltr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

    srand(time(NULL));

    printf("英文字母记忆训练。\n");

    do{
        printf("要挑战的等级(%d~%d):",LEVEL_MIN,LEVEL_MAX);
        scanf("%d",&level);
    }while(level<LEVEL_MIN||level>LEVEL_MAX);

    printf("来记忆%d个英文字母吧。\n",level);

    start=clock();
    for(stage=0;stage<MAX_STAGE;stage++){
        char mstr[LEVEL_MAX+1];
        char x[LEVEL_MAX*2];

        for(i=0;i<level;i++)
        mstr[i]=ltr[rand()%strlen(ltr)];
        mstr[level]='\0';

        printf("%s",mstr);
        fflush(stdout);
        sleep(125*level);

        printf("\r%*s\r",level,"");
        fflush(stdout);
        scanf("%s",x);

        if(strcmp(mstr,x)!=0)
        printf("\a回答错误。\n");
        else{
            printf("回答正确。\n");
            success++;
        }
    }
    end=clock();

    printf("%d次中答对了%d次。\n",MAX_STAGE,success);
    printf("用时%.1f秒。\n",(double)(end-start)/CLOCKS_PER_SEC);

    return 0;
}