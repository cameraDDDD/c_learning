#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // ʹ�ñ��� n ����������Ĵ�С���䳤���飩
    int array[n];

    // ��ʼ������
    for (int i = 0; i < n; i++) {
        array[i] = i * 2;
    }

    // ��ӡ����
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
