#include <stdio.h>
int main(void){
    int bph2o = 99;
    int rv = printf("%d°C是水的沸点\n",bph2o);              /*将printf()函数的字符数传递给变量rv*/
    printf("The function printed %d charaters.\n",rv);
    return 0;
}