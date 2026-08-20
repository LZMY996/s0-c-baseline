#include <stdio.h>
#include <stdlib.h>             //exit(1)要用
int main(void){
    system("chcp 65001 > 0");
    FILE *fp;                   //创建一个文件容器fp
    int id = 10001;
    char name[20] = "Alice";
    float score = 98.6;
    fp = fopen("studens.txt", "w");     //给fp挂载文件students,以w模式打开,w模式会创建或清空students.txt文件
    if (fp == NULL){                    //防御代码,如果文件无法创建或其他问题会让fp挂载失败为空值,下面的写入操作就会失败,所以提前检测用exit(1)退出
        printf("打开文件失败\n");
        exit(1);
    }
    fprintf (fp, "%d %s %.1f",id,name,score);   //对容器fp进行写入操作
    printf("写入成功\n");
    fclose (fp);                                //释放fp
    return 0;
}