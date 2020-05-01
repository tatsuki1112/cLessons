#include<stdio.h>
void func1(void);
void func2(void);

int main(void)
{
    func2();
    printf("夢の跡\n");

    return 0;
}

void func2(void)
{
    func1();
    printf("つはものどもが　");
}

void func1(void)
{
    printf("夏草や　");
}