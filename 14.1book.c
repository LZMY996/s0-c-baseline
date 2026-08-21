#include <stdio.h>
#include <stdlib.h>
#define MAXTITL 41
#define MAXAUTH 31
struct book{
    char title[MAXTITL];
    char author[MAXAUTH];
    float value;
};
int main(void){
    struct book library;
    system("chcp 65001>0");
    printf("请输入书名:\n");
    if(scanf("%40s",library.title) != 1){
        printf("输入失败\n");
        return 1;
    }
    printf("请输入作者:\n");
    if(scanf("%30s",library.author) != 1){
        printf("输入失败\n");
        return 1;
    }
    printf("请输入价格:\n");
    if(scanf("%f",&library.value) != 1){
        printf("输入失败\n");
        return 1;
    }
    printf("%s %s %.1f\n",library.title,library.author,library.value);
    return 0;
}