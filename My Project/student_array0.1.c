#include <stdio.h>
#include <stdlib.h>
#define NAME 21
#define MAXSTU 100
struct student{                
    int id;    
    char name[NAME];
    float score[3];
};
int main(void){
    system("chcp 65001>0");
    struct student stu[MAXSTU];
    int count = 0;
    int i;
    FILE *fp;
    char choose;            //后面问用户是否读取
    
    printf("请输入学生id(写完了输入-1结束):\n");
    while(count < MAXSTU && scanf("%d",&stu[count].id) == 1){
        if (stu[count].id == -1)        //使用-1退出,不要用q或者别的直接跳出,会卡在缓冲里影响后续
        break;
        printf("请输入学生名称:\n");
        if (scanf("%20s",stu[count].name) != 1) {       //防御
            printf("名称输入错误:\n");
            break;
        }
        printf("请输入学生语文,数学,英语成绩:(用空格隔开)\n");
        if (scanf("%f %f %f",&stu[count].score[0],&stu[count].score[1],&stu[count].score[2]) != 3) {            //防御,够三个数据才能录入
            printf("成绩输入错误:\n");
            break;
        }
        count ++;
        
        if (count < MAXSTU)
        printf("请输入下个学生的id(写完了输入-1结束):\n");
    }

    printf("正在保存数据\n");               //写入数据
    fp = fopen("stu.txt","w");
    if (fp == NULL){
        printf("保存失败,无法打开或创建stu.txt\n");
        return 1;
    }
    for (i = 0; i < count; i++)
    fprintf(fp,"%d %s %.1f %.1f %.1f\n",stu[i].id,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
    printf("数据保存完成\n");
    fclose(fp);
    printf("是否要读取数据(y/n)\n");     //做出选择
    while (scanf(" %c",&choose) == 1){
        if (choose == 'y'){
            fp = fopen("stu.txt","r");
            if (fp == NULL) {
                printf("读取失败,无法打开stu.txt\n");
                return 1;
            }
            printf("读取成功,你录入的数据如下:\n");
            for (int i = 0; i < count; i++){
                fscanf (fp,"%d %s %f %f %f",&stu[i].id,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
                printf("ID:%d 姓名:%s 语文成绩:%.1f 数学成绩:%.1f 英语成绩:%.1f\n",stu[i].id,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
            }
            fclose(fp);
            break;
        }
        else if (choose == 'n')
        break;
        else       //y/n以外分支,也属于防御代码
        break;
    }
    printf("进程结束\n");
    return 0;
}
