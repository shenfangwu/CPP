// 4-10 逗号运算符

#include <iostream>

int main()
{
    // 4-33
    int someValue = -1;
    int x = 0;
    int y = 0;
    std::cout<<someValue ? ++x, ++y : --x, --y;// -1
}

