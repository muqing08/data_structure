#include <stdio.h>
#include <stdlib.h>
#include "question.h"

int main() {
//    float a, b, c;
//    float number;
//    float number1;
//    int number2;
//    printf("hello world\n");
//    scanf("%f %f %f", &a, &b, &c);
//    scanf("%d", &number);
//    scanf("%f%d", &number1, &number2);
//    question1(a, b, c);
//    question2();
//    question3(number);
//    number = question4(a, b, c);
//    printf("结果为：%f\n",number);
//    printf("温度为：%f\n", question5(number1, number2));
    float number;
    while ((scanf("%f", &number)) != EOF) {
        printf("圆的面积为：%f\n", question6(number));
        system("date");
    }
    return 0;
}