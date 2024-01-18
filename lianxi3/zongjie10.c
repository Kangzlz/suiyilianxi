#include<stdio.h>
#define NUMBER 5
void swap(int *px,int *py)
{
    int temp=*px;
    *px=*py;
    *py=temp;
}
void bsort(int a[],int n)
{
    int i,j;

    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--)
        if(a[j-1]>a[j])
        swap(&a[j-1],&a[j]);
    }
}
int main(void)
{
    int i;
    int point[NUMBER];

    printf("请输入%d人的分数。\n",NUMBER);
    for(i=0;i<NUMBER;i++){
        printf("%2d号:",i+1);
        scanf("%d",&point[i]);
    }

    bsort(point,NUMBER);

    puts("按升序排列。");
    for(i=0;i<NUMBER;i++)
    printf("%2d号:%d\n",i+1,point[i]);

    return 0; 
}