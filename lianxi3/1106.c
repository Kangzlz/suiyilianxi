/*复制字符串*/
#include<stdio.h>
char *str_copy(char *d,const char *s)
{
    char *t=d;
    
    while(*d++=*s++)
    ;

    return t;
}
int main(void)
{
    char str[128]="ABC";
    char temp[128];

    printf("str=\"%s\"\n",str);

    printf("复制的是:");
    scanf("%s",temp);

    str_copy(str,temp);

    puts("复制了。");
    printf("str=\"%s\"\n",str);

    return 0;
}