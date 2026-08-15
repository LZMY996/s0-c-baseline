#include <stdio.h>
#define CONVERT 60
int main(void){
    int sec,min,left;
    sec = 1;
    while (sec > 0){                /*规定了退出条件*/
        printf("Please enter the number of seconds(sec <=0 quit)\n");
        scanf("%d",&sec);           /*输入0退出*/
        min = sec / CONVERT;
        left = sec % CONVERT;       /*%用于取余*/
        printf("%d seconds is %d minutes and %d seconds\n",sec,min,left);
    }
    printf("Done!");
    return 0;
}