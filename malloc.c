#include <stdio.h>  
#include <stdlib.h>  

int main(void) {  
    int *p = malloc(40); // 分配40字节的内存  
    if (p == NULL) {     // 检查内存分配是否成功  
        fprintf(stderr, "Memory allocation failed\n");  
        return 1;        // 返回错误状态  
    }  

    for (int n = 0; n < 10; n++) {  
        p[n] = n;       // 正确的赋值方式  
    }  

    printf("%d\n", p[0]); // 正确打印p[0]的值  

    free(p); // 释放分配的内存  
    return 0; // 正常结束程序  
}
