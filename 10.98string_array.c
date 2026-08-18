#include <stdio.h>
#define SIZE 3
#define LEN 20
int main(void){
    char names[SIZE][LEN];                      /*char虽然是单个字符,但是创建二维数组就可以存字符串,SIZE是字符串编号,LEN是字符串长度即具体字符*/
    printf ("please enter %d names.\n",SIZE);
    for (int i = 0; i < SIZE; i++){
        scanf("%s",names[i]);                   /*%s是字符串类型,name[i]表示那一串字符的地址,name[i][0]才是具体的元素,所以不加&*/
    }           
    printf ("The names are:.\n",SIZE);
    for (int i = 0; i < SIZE; i++){
        printf("%s\n",names[i]);                /*输出names[i]才能将完整名字输出出来*/
    }
    return 0;
}