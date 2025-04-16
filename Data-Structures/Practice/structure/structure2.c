#include<stdio.h>

struct book
{
    char title[30];
    char author[30];
    int price;
};

int main(void){
    struct book text_book[3] = 
    {
        {"국어", "홍길동", 15000},
        {"영어", "이순신", 18000},
        {"수학1", "강감찬", 10000},
    };

    puts("각 교과서의 이름은 다음과 같습니다.");
    printf("%s, %s, %s\n", text_book[0].title, text_book[1].title, text_book[2].title);
}