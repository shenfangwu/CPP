// 4-8位运算符

#include <iostream>

int main()
{
    // 练习4.25
    char c = 'q';
    c = ~c << 6;
    std::cout << c << std::endl;
    // 练习4.27
    unsigned long ul1 = 3, ul2 = 7;
    ul1 & ul2;// 位与操作  00000000000000000000000000000011 (ul1)&00000000000000000000000000000111 (ul2)
    ul1 | ul2;// 位或操作
    ul1 && ul2;// 逻辑与
    ul1 || ul2;
    return 0;
}

