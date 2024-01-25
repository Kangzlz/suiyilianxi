/*用字符和字符编码显示文件内容*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int n;
    FILE *fp;
    char fname[FILENAME_MAX];
    unsigned long count=0;
    unsigned char buf[16];

    printf("文件名:");
    scanf("%s",fname);

    if((fp=fopen(fname,"rb"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        while((n=fread(buf,1,16,fp))>0){
            int i;

            printf("%08lX ",count);

            for(i=0;i<n;i++)
            printf("%02X ",(unsigned)buf[i]);

            if(n<16)
            for(i=n;i<16;i++)
            printf("   ");

            for(i=0;i<n;i++)
            putchar(isprint(buf[i])?buf[i]:'.');
            
            putchar('\n');

            count++;
        }
        fclose(fp);
    }

    return 0;
}