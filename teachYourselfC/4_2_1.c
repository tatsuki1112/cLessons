#include <stdio.h>

void f1(void);

int count;

int main(void)
{
    count = 10;
    f1();
    printf("main()のcountの値: %d\n", count);

    return 0;

}

void f1(void)
{
    int count;

    count = 100;
    printf("f1()のcountの値: %d\n", count);
}