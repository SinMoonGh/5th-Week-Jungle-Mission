#include<stdio.h>
#include <string.h>

struct book
{
    char title[30];
    char author[30];
    int price;
};

int main(void){
    struct book my_book = {"C언어 완전 해부", "홍길동", 33333};
    struct book* ptr_my_book;

    ptr_my_book = &my_book;

    strcpy((*ptr_my_book).title, "C언어 마스터");
    strcpy(ptr_my_book->author, "이순신");
    my_book.price = 3000;

    printf("책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다\n", my_book.title, my_book.author, my_book.price);
    return 0;
}