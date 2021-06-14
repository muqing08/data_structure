#include <stdio.h>
#include <math.h>

#define Pi 3.1415926f;
const float PI = 3.1415926f;
//第一种方式：是将Pi定义成一种符号，此时Pi只是3.1415926的别名，在编译期间用3.1415926去取代Pi的值；
//第二种方式：是将PI定义成变量，但告诉编译器它的值是固定不变的，如果在程序中试图去修改它的值，在编译时会报错；

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
    if (b == c) {
        printf("分母的值不能为0!\n");
        return -1;
    } else {
        return a / (b - c);
    }
}

float question5(float ForC, int tag) {
    if (tag == 0) {
        printf("输入华氏温度计算摄氏温度！\n");
        return ((ForC - 32) * 5) / 9;
    } else if (tag == 1) {
        printf("输入摄氏温度计算华氏温度！\n");
        return ((ForC * 9) / 5) + 32;
    } else {
        printf("输入非法，请正确输入！\n");
        return -1;
    }
}

double question6(double r) {
    printf("%f\n", r);
    printf("%f\n", PI);
    printf("%f\n", pow(r, 2));
    printf("%f\n", PI * pow(r, 2));
    return PI * pow(r, 2);
}