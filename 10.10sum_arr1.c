#include <stdio.h>
#define SIZE 10                                             /*定义数组全局长度*/
int sum(int ar[],int n);                                    /*定义sum函数及指针*/
int main(void){
    int marbles[SIZE] = {10,12,51,36,13,73,14,62,46,26};    
    long answer;                                            /*总和可能很大,用long型保险*/
    answer = sum(marbles,SIZE);                             /*调用sum函数*/
    printf("The total number is %ld.\n",answer);            /*%ld是长整型,对齐long*/
    printf("The size of marbles is %zd.\n",sizeof marbles); /*%zd是sizeof专用的标识符*/
    return 0;
}
int sum(int ar[],int n){                                    /*定义sum函数的具体内容*/
    int total = 0;
    for (int i = 1;i < n;i++){
        total += ar[i];                                     /*+=意思是把右边值加到左边去*/
    }
    printf("The size of ar is %zd.\n",sizeof ar);           /*此处引用的ar是一个指针,实际上这是在算指针所占大小,64位固定为8*/
    return total;                                           /*将total作为函数处理结果返回出去*/
}