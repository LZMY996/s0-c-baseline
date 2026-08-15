#include <stdio.h>
#define ADJUST 7.31
int main(void){
    const double scale = 0.333;             /*main函数内定义常量*/
    double shoe,foot;
    shoe = 9.0;
    foot = shoe * scale + ADJUST;
    printf("shoe       foot\n");
    printf("%.2f%12.2f\n",shoe,foot);       /*12意思是占位符长度12,不足12前面补空格填充*/
    return 0;
}