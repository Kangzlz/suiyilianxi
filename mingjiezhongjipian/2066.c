/*心算训练（连加三个三位数的整数）*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
    int a,b,c;
    int x;
    clock_t start,end;
    double req_time;

    srand(time(NULL));
    a=100+rand()%900;
    b=100+rand()%900;
    c=100+rand()%900;

    printf("%d+%d+%d等于多少:",a,b,c);

    start=clock();
    while(1){
        scanf("%d",&x);
        if(x==a+b+c)
        break;
        printf("\a回答错误!!\n请重新输入:");
    }
    end=clock();
    req_time=(double)(end-start)/CLOCKS_PER_SEC;

    printf("用时%.1f秒。\n",req_time);

    if(req_time>30.0)
    puts("花太长时间了。");
    else if(req_time>17)
    puts("还行吧。");
    else
    puts("太快了。");

    return 0;
}