#include <stdio.h>

typedef struct
{
    int savings;
    int loan;
} PROP;

int calcProperty(int, int);

int main(void){
    int hong_prop;
    PROP hong = {1000, 40000};

    hong_prop = calcProperty(hong.savings, hong.loan);

    printf("홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다. \n", hong.savings, hong.loan, hong_prop);
    return 0;
}

int calcProperty(int s, int i){
    return (s-i);
}