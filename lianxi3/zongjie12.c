/*表示日期的结构体和表示人的结构体*/
#include<stdio.h>
#define NAME_LEN 128
struct Date{
    int y;
    int m;
    int d;
};
typedef struct {
    char name[NAME_LEN];
    struct Date birthday;
}Human;
void print_Human(const Human *h)
{
    printf("%s (%04d年%02d月%02d日生)\n",
    h->name,h->birthday.y,h->birthday.m,h->birthday.d);
}
int main(void)
{
    int i;
    struct Date today;
    Human member[]={
        {"古贺政男",{1904,11,18}},
        {"柴田望洋",{1963,11,18}},
        {"冈田准一",{1980,11,18}}
    };
    printf("请输入今天的日期。\n");
    printf("年:"); scanf("%d",&today.y);
    printf("月:"); scanf("%d",&today.m);
    printf("日:"); scanf("%d",&today.d);

    printf("今天是%d年%d月%d日。\n",today.y,today.m,today.d);

    printf("---会员一览表---\n");
    for(i=0;i<sizeof(member)/sizeof(member[0]);i++)
    print_Human(&member[i]);

    return 0;
}