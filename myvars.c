#include <stdio.h>
int main(void){
    int age;
    float weight;
    char grade;
    printf("请输入你的年龄:\n");
    scanf("%d",&age);
    printf("请输入你的体重:\n");
    scanf("%f",&weight);
    printf("请输入你的等级:\n");
    scanf(" %c",&grade);                    /*%c前面要加空格,不然就会读取回车符*/
    printf("年龄:%d岁,体重:%.0f公斤,等级:%c\n",age,weight,grade);
    printf("你的体重是%.0f斤\n",weight *2);
    return 0;
}