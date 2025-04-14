#include <stdio.h>

int main(){
    // printf("----------다양한 출력분에 대해서 이야기 해봅시다-----------\n");
    // printf("hello, world\n");
    // printf("%%c를 사용한 결과 : %c\n", 'a');
    // printf("%%s를 사용한 결과 : %s\n", "즐거운 C언어");

    // int num_s1;
    // int num_s2;

    // printf("첫 번째 정수를 입력하세요\n");
    // scanf("%d", &num_s1);
    // printf("두 번째 정수를 입력하세요\n");
    // scanf("%d", &num_s2);

    // printf("--------------다양한 type 변수를 받아봅시다---------------\n");
    // int num;
    // printf("%d", num);

    // int num1, num2;
    // double num3 = 1.23, num4 = 4.56;

    // printf("%d\n %d\n %g\n %g\n", num1, num2, num3, num4);

    // printf("-------------------타입 변환을 이해해 봅시다-------------------\n");
    // char ch = 200;
    // int num001 = 3.14;
    // double num002 = 5;

    // printf("ch에 저장된 값은 %d입니다\n", ch);
    // printf("num001에 저장된 값은 %d입니다\n", num001);

    // double result01 = 5 + 3.14;
    // double result02 = 5.0f + 3.14;

    // printf("result01에 저장된 값은 %f입니다.\n", result01);
    // printf("result01에 저장된 값은 %f입니다.\n", result02);

    // int num01 = 1;
    // int num02 = 4;

    // double result001 = num01/ num02;
    // double result002 = (double)num01/ num02;

    // printf("resultf01에 저장된 값은 %f입니다\n", result001);
    // printf("resultf01에 저장된 값은 %f입니다\n", result002);

    printf("-------------------증감 연산자를 이해해봅시다-------------------\n");
    int num01 = 7;
    int num02 = 7;
    int result01, result02;

    result01 = (++num01) - 5;
    result02 = (num02++) - 5;

    

    return 0;
}