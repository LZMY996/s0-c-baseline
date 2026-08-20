#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("chcp 65001 > 0");
    FILE *fp;
    int id;
    char name[20];
    float score;

    fp = fopen("students.txt", "r");        //以读取模式挂载到fp上打开
    if (fp == NULL){
        printf("打开文件失败\n");
        exit(1);
    }
    
    fscanf(fp, "%d %s %f", &id,name,&score);        //从students.txt中读取数据赋值给函数
    printf("读取成功:id = %d,name = %s,score = %.1f\n",id, name, score);

    fclose(fp);
    return 0;
}