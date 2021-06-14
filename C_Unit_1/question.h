#include <stdio.h>

int question1(int a, int b, int c) {
    printf("%dx+%dy=%d\n", a, b, c);
    return 1;
}

int question2() {
    printf("第1行\t:\t姓名\n");
    printf("第二行\t:\t门牌号，街道\n");
    printf("第三行\t:\t城市名，邮政编号\n");
    return 1;
}

int question3(int number) {
    int i = 1;
    while (i <= 10) {
        printf("%d\tx\t%d\t=\t%d\n", number, i, number * i);
        i++;
    }

    return 1;
}

float question4(float a, float b, float c) {
    return a / (b - c);
}