#include <stdio.h>
#include <stdlib.h>
#define MAXTITL 41
#define MAXAUTH 41
#define MAXBOOK 100
struct book{                //struct的作用是创建一个自定义的变量类型,不要忘记在结尾节加";"
    char title[MAXTITL];    
    char author[MAXAUTH];
    float value;
};
int main(void){
    system("chcp 65001>0");
    struct book library[MAXBOOK];       //创建一个book类型的数组library,前面记得加struct
    int count = 0;          //定义一个指针在数组中写入时进行偏移
    
    printf("请输入书的标题(写完了输入q保存):\n");
    while(count < MAXBOOK && scanf("%40s",library[count].title) == 1){      //循环录入用while,条件里面直接执行一个scanf函数来判断用户要录入还是要退出, == 1才进入循环,防止不小心按到回车直接下一步
        if (library[count].title[0] == 'q'){                                //if提供退出出口,判断title字符串组第一个字母是否为q
            break;
        }
        printf("请输入书的作者:\n");
        scanf("%40s",library[count].author);
        printf("请输入书的价值:\n");
        scanf("%f",&library[count].value);
        count ++;                                                           //写完一本后count偏移到下一个空位
        
        if (count < MAXBOOK)                                                //写检测判断还有空位就问用户要不要写下一本
        printf("请输入下本书的标题(写完了输入q保存):\n");
    }
    if (count > 0){                                                         //录完后检测数据是否存在同时输出数据
        printf("你录入的数据为:\n 书名   作者   价格\n");
        for (int i = 0; i < count; i++){
            printf("%5s %5s %7.1f\n",library[i].title,library[i].author,library[i].value);
        }
    }
    else
    printf("你根本就没写东西!(怒.png)\n");
    return 0;
}
