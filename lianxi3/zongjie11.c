/*字符串和字符串数组*/
#include<stdio.h>
#include<ctype.h>
#define put_str_ln(s) (put_str(s),putchar('\n'))
void put_str(const char *s)
{
    putchar('\"');
    while(*s)
    putchar(*s++);
    putchar('\"');
}
char *str_cpy_toupper(char *d,const char *s)
{
    char *tmp=d;

    while(*d++=toupper(*s++))
    ;

    return tmp;
}
int main(void)
{
    int i;
    char s[128],t[128];
    char a[]="CIA";
    char *p="FBI";
    char a2[][5]={"LISP","C","Ada"};
    char *p2[]={"PAUL","X","MAC"};

    printf("字符串s="); scanf("%s",s);
    printf("转换为大写并复制到数组t。\n");
    printf("字符串t=%s\n",str_cpy_toupper(t,s));

    printf("a="); put_str_ln(a);
    printf("p="); put_str_ln(p);

    for(i=0;i<sizeof(a2)/sizeof(a2[0]);i++){
        printf("a2[%d]=",i); put_str_ln(a2[i]);
    }

    for(i=0;i<sizeof(p2)/sizeof(p2[0]);i++){
        printf("p2[%d]=",i); put_str_ln(p2[i]);
    }

    return 0;
}