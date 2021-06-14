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
    int ret, i;
    while (fflush(stdin), (ret = scanf("%d", &i)) != EOF) {
        printf("i=%d\n", i);
    }
    system("pause");
    return 0;
}