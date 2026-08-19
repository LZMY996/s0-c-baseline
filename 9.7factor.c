#include <stdio.h>
long fact(int n);       /*定义循环阶乘*/
long rfact(int n);      /*定义递归阶乘*/
int main(void){
    int nums;
    printf("please enter 0-12:(q to quit)\n");
    while (scanf("%d",&nums) == 1){     /*判断条件写scanf %d == 1就是让用户输入后检测1个返回值是否为整数,scanf的返回值即输入的个数,一般作为条件都写==1*/
        if (nums > 12)
        printf("not biger 12\n");
        else if (nums < 0)
        printf("not smaller 0\n");
        else{
            printf("fact is %ld.\n",fact(nums));        /*调用fact函数计算阶乘*/
            printf("rfact is %ld.\n",rfact(nums));      /*调用rfact函数计算阶乘*/
        }
        printf("please enter 0-12:(q to quit)\n");      /*下一轮还会让用户输入数字进行判断,所以再提示一次,这个在while中和scanf判断条件同时出现*/
    }
    printf("Bye!\n");
    return 0;
}
long fact(int n){
    long ans;
    for (ans = 1; n > 1; n--)
    ans *= n;
    return ans;
}
long rfact(int n){
    long ans;
    if (n > 0)
    ans = n * rfact(n-1);
    else
    ans = 1;
    return ans;
}