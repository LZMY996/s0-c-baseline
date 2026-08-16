#include <stdio.h>
#define ROWS 26                                     /*定义总行数*/
int main(void){
    int row;
    char ch;
    for (row = 0; row < ROWS; row++){               /*0-25共26行*/
        for (ch = 'Z'; ch > (row - 1) + 'A'; ch--){ /*嵌套循环来控制每行内容,(row - 1) + 'A',含row来与外层行数建立联系+'A'来将ch偏移到合适位置,-1是指偏移至A前*/
            printf("%c",ch);
        }
        printf("\n");                               /*换行核心*/
    }
    return 0;
}