#include <stdio.h>
#include <string.h>             /*引入string环境来调用函数*/
#include <stdlib.h>             /*中文适配*/
#define DENSITY 62.4            /*定义常量*/
int main(void){
    system("chcp 65001>0");     /*中文适配*/
    float weight,volume;
    int size,letters;
    char name[40];              /*[]来定义数组*/
    printf("你好,你的名字是什么:\n");   
    scanf("%s",name);           /*数组无需查址*/
    printf("%s,你的体重是多少:\n",name);
    scanf("%f",&weight);
    volume = weight / DENSITY;
    size = sizeof name;         /*sizeof返回所用内存大小*/
    letters = strlen(name);     /*strlen()返回字符数*/
    printf("%s,你的体积是%2.2f\n",name,volume);
    printf("%s,你的名字的长度是%d\n",name,letters);
    printf("你知道吗,我用了%d个字节来存储它\n",size);
    return 0;
}