#include <stdio.h>
int main(void){
    char ch;
    while ((ch = getchar()) != EOF)//按下回车后执行循环 
        putchar(ch);
    return 0;
}
