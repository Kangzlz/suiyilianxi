/*同时训练扩大水平方向视野的心算试炼*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
    int a,b,c;
    int x;
    clock_t start,end;
    int n;
    int stage;

    srand(time(NULL));
    
    printf("扩大视野心酸试炼开始！！\n");
    start=clock();

    for(stage=0;stage<10;stage++){
        a=10+rand()%90;
        b=10+rand()%90;
        c=10+rand()%90;
        n=rand()%17;

        printf("%d%*s+%*s%d%*s+%*s%d:",a,n,"",n,"",b,n,"",n,"",c);

        do{
            scanf("%d",&x);

            if(x==a+b+c)
            break;
            printf("\a回答错误。请重新输入:");
        }while(1);
    }

    end=clock();
    printf("用时%.1f秒。\n",(double)(end-start)/CLOCKS_PER_SEC);

    return 0;
}