/*拥有超能力的洋子（在结构体中引入typedef名）*/
#include<stdio.h>
#define NAME_LEN 64
typedef struct student{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
}Student;
void hiroko(Student *std)
{
    if(std->height<180) std->height=180;
    if(std->weight>80) std->weight=80;
}
int main(void){
    Student sanaka={"Sanaka",175,62.5,3000};

    hiroko(&sanaka);

    printf("姓名=%s\n",sanaka.name);
    printf("身高=%d\n",sanaka.height);
    printf("体重=%.1f\n",sanaka.weight);
    printf("奖学金=%ld\n",sanaka.schols);

    return 0;
}