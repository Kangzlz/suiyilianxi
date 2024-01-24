/*将圆周率写入文本文件，再进行读取*/
#include<stdio.h>
int main(void)
{
    FILE *fp;
    double pi=3.1415926535897932846;

    printf("从变量pi得到的圆周率为%23.21f。\n",pi);

    if((fp=fopen("PI.txt","w"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        fprintf(fp,"%f",pi);
        fclose(fp);
    }
    if((fp=fopen("PI.txt","r"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        fscanf(fp,"%lf",&pi);
        printf("从文件读取到的圆周率为%23.21f。\n",pi);
        fclose(fp);
    }
    return 0;
}