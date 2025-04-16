#include <stdio.h>

typedef struct
{
    int savings;
    int loan;
} PROP;

PROP initProperty(void);
int calcProperty(const PROP*);

int main(void){
    PROP prop;
    int hong_prop;

    prop = initProperty();
    printf("%p", prop);
    hong_prop = calcProperty(&prop);

    printf("홍길동의 재산은 적금 %d원에 대출 %d원을 제외한 총 %d원입니다. \n", prop.savings, prop.loan, hong_prop);
    return 0;
}

PROP initProperty(void)
{
    PROP hong = {1000, 4000};
    return hong;
}

int calcProperty(const PROP* money){
    return (money->savings - money->loan);
}