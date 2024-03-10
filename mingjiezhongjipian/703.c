/*寻找幸运数字训练（其一）*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX_STAGE 10
int main(void)
{
    int i,j,stage;
    int dgt[9]={1,2,3,4,5,6,7,8,9};
    int a[9]={0};
    double jikan;
    clock_t start,end;

    srand(time(NULL));

    printf("请输入缺少的数字。\n");

    start=clock();
    for(stage=0;stage<MAX_STAGE;stage++){
        int x=rand()%9;
        int no;

        i=j=0;
        while(i<9){
            if(i!=x)
            a[j++]=dgt[i];
            i++;
        }

        for(i=0;i<8;i++)
        printf("%d ",a[i]);
        printf(": ");

        do{
            scanf("%d",&no);
        }while(no!=dgt[x]);
    }
    end=clock();

    jikan=(double)(end-start)/CLOCKS_PER_SEC;

    printf("用时%.1f秒。\n",jikan);

    if(jikan>25.0)
    printf("反应太慢了。\n");
    else if(jikan>20.0)
    printf("反应有点慢呀。\n");
    else if(jikan>17.0)
    printf("反应还行吧。\n");
    else
    printf("反应真快啊。\n");

    return 0;
}