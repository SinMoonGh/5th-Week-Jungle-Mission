#include <stdio.h>

typedef struct
{
    char a;
    int b;
    double c;
}TYPESIZE;

int main(void)
{
    puts("구조체 typesize의 각 멤버의 크기는 다음과 같습니다.");
    printf("%d %d %d\n", sizeof(char), sizeof(int), sizeof(double));

    puts("구조체 typesize의 크기는 다음과 같습니다.");
    printf("%d\n", sizeof(TYPESIZE));
    return 0;
}