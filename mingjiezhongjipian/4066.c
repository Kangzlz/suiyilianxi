/*珠玑妙算*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void make4digits(int x[])
{
    int i,j,val;
    for(i=0;i<4;i++){
        val=rand()%10;
        do{
            for(j=0;j<i;j++)
            if(val==x[j])
            break;
        }while(j<i);
        x[i]=val;
    }
}
int check(const char s[])
{
    int i,j;

    if(strlen(s)!=4)
    return 1;

    for(i=0;i<4;i++){
        if(!isdigit(s[i]))
        return 2;
        for(j=0;j<i;j++)
        if(s[i]==s[j])
        return 3;
    }
    return 0;
}
void judge(const char s[],const int no[],int *hit,int *blow)
{
    int i,j;

    *hit=*blow=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(s[i]=='0'+no[j])
            if(i==j)
            (*hit)++;
            else
            (*blow)++;
        }
    }
}
void print_result(int snum,int spos)
{
    if(spos==4)
    printf("回答正确。\n");
    else if(snum==0)
    printf("这些数字没有答案数字。\n");
    else{
        printf("这些数字里包括了%d个答案数字。\n",snum);
        if(spos==0)
        printf("但这些数字的位置都不一致。\n");
        else
        printf("其中有%d个数字是一致的。\n",spos);
    }
    putchar('\n');
}
int main(void)
{
    int hit;
    int blow;
    int no[4];
    char buff[10];
    int try_no=0;
    int chk;
    clock_t start,end;

    srand(time(NULL));

    puts("来玩珠玑妙算吧。");
    puts("请猜4个数字。");
    puts("其中不包含相同数字。");
    puts("请像4037这样连续输入数字。");
    puts("不能输入空格字符。\n");

    make4digits(no);

    start=clock();

    do{
        do{
            printf("请输入：");
            scanf("%s",buff);

            chk=check(buff);

            switch(chk){
                case 1:puts("\a请确保输入4个字符。"); break;
                case 2:puts("\a请不要输入除数字以外的字符。"); break;
                case 3:puts("\a请不要输入相同字符。"); break;
            }
        }while(chk!=0);

        try_no++;

        judge(buff,no,&hit,&blow);

        print_result(hit+blow,hit);
    }while(hit<4);

    end=clock();

    printf("用了%d次。\n用时%.1f秒。\n",try_no,(double)(end-start)/CLOCKS_PER_SEC);

    return 0;
}