#include <stdio.h>
int main(void)
{
    double x[3], y[3];
    for (int i = 1; i <= 3; i++)
    {
        printf("�����%d���������:", i);
        scanf("%lf%lf", &x[i - 1], &y[i - 1]);
    }
    if ((y[2] - y[1]) / (x[2] - x[1])-(y[0] - y[1]) / (x[0] - x[1])<0.0001)
        printf("����������һ��ֱ����");
    else
        printf("�������㲻��һ��ֱ����");
    return 0;
}
