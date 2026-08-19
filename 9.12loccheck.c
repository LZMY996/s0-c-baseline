#include <stdio.h>
void f(int);
int main(void){
    int a = 5,b = 2;
    printf("a = %d,b = %d.\n",a,b);
    f(a);                               /*调用一下,把a给进f函数*/
    printf("Now a = %d,b = %d.\n",a,b); /*回来发现ab值均未改变,因为每个函数中的变量是局部变量,单独存储*/
    return 0;
}
void f(int b){
    int a = 10;                         /*尝试改变main中的a值,实际未改变*/
    printf("a = %d,b = %d.\n",a,b);     /*void型不返回值不需要写return*/
}