/*格式化字符串“12345”并显示*/
#include<stdio.h>
int main(void)
{
    char str[]="12345";

    printf("%s\n",str);
    printf("%3s\n",str);
    printf("%.3s\n",str);
    printf("%8s\n",str);
    printf("%-8s\n",str);

    return 0;
}