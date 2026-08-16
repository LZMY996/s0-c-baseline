#include <stdio.h>
#define NUMBER 0
int main(void){
    int i;
    for (i = 5; i >= NUMBER; i--){                            /*for(初始值;判断条件;更新方式)*/
        printf("%d\n",i);
    }
    printf("Have a good day!");
    return 0;
}
