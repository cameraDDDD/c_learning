#include <stdio.h>  
#include <stdlib.h>  

int main(void) {  
    int *p = malloc(40); // ����40�ֽڵ��ڴ�  
    if (p == NULL) {     // ����ڴ�����Ƿ�ɹ�  
        fprintf(stderr, "Memory allocation failed\n");  
        return 1;        // ���ش���״̬  
    }  

    for (int n = 0; n < 10; n++) {  
        p[n] = n;       // ��ȷ�ĸ�ֵ��ʽ  
    }  

    printf("%d\n", p[0]); // ��ȷ��ӡp[0]��ֵ  

    free(p); // �ͷŷ�����ڴ�  
    return 0; // ������������  
}
