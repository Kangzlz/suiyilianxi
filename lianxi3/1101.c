/*用数组实现字符串和用指针实现字符串*/
#include<stdio.h>
int main(void)
{
    char str[]="ABC";
    char *ptr="123";

    printf("str=\"%s\"\n",str);
    printf("ptr=\"%s\"\n",ptr);

    return 0;
}