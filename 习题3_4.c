#include <stdio.h>  

int main(void) {  
    int arr[10];  
    float sum = 0;  
    int max_value, min_value;  

    // ��������Ԫ��  
    for (int i = 0; i < 10; i++) {  
        scanf("%d", &arr[i]);  // �޸�Ϊ&arr[i]���Դ�������Ԫ�صĵ�ַ  
    }  

    // ��ʼ�����ֵ����Сֵ  
    max_value = arr[0];   
    min_value = arr[0];   

    // �ҵ����ֵ����Сֵ  
    for (int i = 0; i < 10; i++) {  
        if (arr[i] > max_value) {  
            max_value = arr[i];  
        }  
        if (arr[i] < min_value) {  
            min_value = arr[i];   
        }  
    }  

    // �����ܺ�  
    for (int i = 0; i < 10; i++) {  
        sum += arr[i];  
    }  

    // ȥ�����ֵ����Сֵ  
    sum = sum - max_value - min_value;  

    // ���ȥ�����ֵ����Сֵ���ƽ��ֵ  
    printf("%.2f\n", sum / 8); // %.2f���ڸ�ʽ�����ΪС�������λ  

    return 0; // ���return��䣬��ʾ������������  
}
	

      



