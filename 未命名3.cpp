#include <stdio.h>  

int main(void) {  
    int i;  
    int powers[] = {1, 2, 3, 4, 5, 6, 7, 8};  
    
    // 从数组的最后一个元素开始，逆向打印到第一个元素  
    for (i = 7; i >= 0; --i) {  
        printf("%d ", powers[i]);  
    }  
    printf("\n");  // 打印后换行  
    return 0;  
}
