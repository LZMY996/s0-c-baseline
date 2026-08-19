#include <stdio.h>
void f(int);
int main(void){
    f(1);
    return 0;
}
void f(int n){
    printf("%d",n);     /*在判断if前写递的意义*/
    if (n < 4)          /*规定递归函数的终值*/
        f(n+1);
    printf("%d",n);     /*if判定失败结束后,从最近到以前,即从后往前开始归,执行if之后的剩余code*/
}