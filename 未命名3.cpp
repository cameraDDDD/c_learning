#include <stdio.h>  

int main(void) {  
    int i;  
    int powers[] = {1, 2, 3, 4, 5, 6, 7, 8};  
    
    // ����������һ��Ԫ�ؿ�ʼ�������ӡ����һ��Ԫ��  
    for (i = 7; i >= 0; --i) {  
        printf("%d ", powers[i]);  
    }  
    printf("\n");  // ��ӡ����  
    return 0;  
}
