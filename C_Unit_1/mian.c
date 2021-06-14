#include <stdio.h>
#include "question.h"

int main() {
    float a, b, c;
    float number;
    printf("hello world\n");
    scanf("%f %f %f", &a, &b, &c);
//    scanf("%d", &number);
//    question1(a, b, c);
//    question2();
//    question3(number);
    number = question4(a, b, c);
    printf("结果为：%0.1f\n",number);
    return 0;
}