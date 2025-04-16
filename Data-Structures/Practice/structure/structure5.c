#include <stdio.h>

typedef struct
{
    int savings;
    int loan;
} PROP;

int calcProperty(PROP*);

int main(void){
    int hong_prop;
    PROP hong = {1000, 400};

    hong_prop = calcProperty(&hong);

    printf("홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다. \n", hong.savings, hong.loan, hong_prop);
    return 0;
}

int calcProperty(PROP* money){
    money->savings = 100;
    return (money->savings - money->loan);
}
