#include <stdio.h>
#include <stdlib.h>
#define PRAISE "你是一个很棒的人."
int main(void){
    system("chcp 65001>0");
    char name[40];
    printf("你叫什么:\n");
    scanf("%s",name);
    printf("%s,%s\n",name,PRAISE);
    return 0;
}