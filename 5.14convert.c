#include <stdio.h>
int main(void){
    int i;
    float fl;
    char ch;
    i = ch = fl = 'C';              /*给ch赋字母值要用单引号否则会报错*/
    printf("ch = %c  i = %d  fl = %2.2f\n",ch,i,fl);
    ch = ch + 1;
    i = fl + ch *2;
    fl = i * 5 + ch;
    printf("ch = %c  i = %d  fl = %2.2f\n",ch,i,fl);
    ch = (char)1107;                      /*1107超出ch范围,除以256后得到83<127输出83ASCII码*加(char)防止gcc报错*/
    printf("ch = %c\n",ch);
    ch = 90.73;                     /*后面的73会被截断,取90的ASCII码输出*/
    printf("ch = %c\n",ch);
    return 0;
}