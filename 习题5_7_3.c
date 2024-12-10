#include <stdio.h>
int main() {
    int scores[20],c1=0,c2=0,c3=0,c4=0,c5=0;
    
    for (int i = 0; i < 20; i++) {
        printf("第%d个学生的成绩:",i + 1);
        scanf("%d", &scores[i]);
    }

    // 统计各分数段的人数
    for (int i = 0; i < 20; i++) {
        if (scores[i] >= 90) {
            c1++;
        } else if (scores[i] >= 80) {
            c2++;
        } else if (scores[i] >= 70) {
            c3++;
        } else if (scores[i] >= 60) {
            c4++;
        } else {
            c5++;
        }
    }
    printf("\n----------各分数段的人数统计:----------\n");
    printf("90 分及以上: %d\n", c1);
    printf("80~89 分: %d\n", c2);
    printf("70~79 分: %d\n", c3);
    printf("60~69 分: %d\n", c4);
    printf("60 分以下: %d\n", c5);
    return 0;
}
