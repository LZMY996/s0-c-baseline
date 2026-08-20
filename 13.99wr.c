#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main(void){
    system("chcp 65001>0");
    int ids[SIZE] = {10001,10002,10003,10004};
    char names[SIZE][20] = {"LiLong","ChenMenghan","FengYanghui","SunZixuan"};
    float scores[SIZE] = {100.0,100.0,100.0,100.0};
    int rid;
    char rname[20];
    float rscore;
    FILE *fp;
    int j = 1;

    fp = fopen("students2.txt","w");
    if (fp == NULL){
        printf("无法打开文件\n");
        exit(1);
    }
    for (int i = 0; i < SIZE; i++){
        fprintf(fp, "%d %s %.1f\n",ids[i],names[i],scores[i]);
        printf("正在写入第%d条数据\n",i + 1);
    }
    printf("数据已完全写入\n");
    fclose(fp);

    printf("开始读取数据\n");
    fp = fopen("students2.txt","r");
    if (fp == NULL){
        printf("无法打开文件\n");
        exit(1);
    }
    while (fscanf(fp, "%d %s %f",&rid, rname, &rscore) == 3){                   //读取是在往函数存数据,f前不能加".",fscanf返回值是它读取数据的个数,每条记录有三个属性,所以==3就printf一次
        printf("读取到第%d条数据为: 编号%d %s 成绩%.1f分\n",j++,rid,rname,rscore);
    }
    printf("数据已全部读取完成!\n");
    fclose(fp);
    return 0;
}