/*显示字符和字符编码*/
#include<stdio.h>
#include<ctype.h>
#include<limits.h>
int main(void)
{
    int i;

    for(i=0;i<=CHAR_MAX;i++){
        switch(i){
            case '\a':printf("\\a"); break;
            case '\b':printf("\\b"); break;
            case '\f':printf("\\b"); break;
            case '\n':printf("\\n"); break;
            case '\r':printf("\\r"); break;
            case '\t':printf("\\t"); break;
            case '\v':printf("\\v"); break;
            default :printf(" %c",isprint(i)?i:' ');
        }
        printf(" %02x\n",i);
    }
    return 0;
}