/*显示所选动物的叫声*/
#include<stdio.h>
enum animal {Dog,Cat,Monkey,Invalid};
void dog(void)
{
    puts("汪汪！！");
}
void cat(void)
{
    puts("喵~!!");
}
void monkey(void)
{
    puts("唧唧！！");
}
enum animal select(void)
{
    int tmp;

    do{
        printf("0~狗 1~猫 2~猴 3~结束:");
        scanf("%d",&tmp);
    }while(tmp<Dog||tmp>Invalid);

    return tmp;
}
int main(void)
{
    enum animal selected;
    do{  
    switch(selected=select()){
        case Dog:dog(); break;
        case Cat:cat(); break;
        case Monkey:monkey(); break;
        default:break;
     }
    }while(selected!=Invalid);

    return 0;
}