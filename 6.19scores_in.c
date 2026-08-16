#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define AA 70
int main(void){
    system ("chcp 65001 > 0");
    int i,score[SIZE];
    int sum = 0;
    float avg;
    printf("请输入5个学生的成绩\n");
    for (i = 0; i < SIZE; i++){
        scanf("%d",&score[i]);              /*变量和数组中的元素都要用&来寻址*/
    }
    printf("您输入的5个成绩为:\n");
    for (i = 0; i < SIZE; i++){
        printf("%d",&score[i]);
    }
    for (i = 0; i < SIZE; i++){
        sum = sum + score[i];
    }
    avg = (float)sum / SIZE;                /*avg为float类型后面计算至少有一个float才能使结果为float给sum转(float)*/
    printf("\n学生成绩总和为%d分,平均成绩为%.0f分,比全校高了%.0f分\n",sum,avg,avg - AA);
    return 0;
}