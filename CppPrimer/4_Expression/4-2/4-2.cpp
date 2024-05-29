// 4-2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    //  练习4.4 4.5
    std::cout << 12/3*4+5*15+24%4/2<<std::endl;//16+75+0 = 91
    std::cout << -30 * 3 + 21 / 5 << std::endl;//-90+4 = -86
    std::cout << -30 + 3 * 21 / 5 << std::endl;// -30+12 = -18
    std::cout << 30 / 3 * 21 % 5 << std::endl;//210%5 = 0
    std::cout << -30 / 3 * 21 % 4 << std::endl;//-210%4 = -2
    // 练习4.6 判断奇偶
    int i = 5;
    bool res = (i % 2 == 0)? true : false;
    std::cout << res << std::endl;
    // 练习4.7 环绕现象
    short svalue = 32767; ++svalue; // -32768
    unsigned uivalue = 0; --uivalue;  // 4294967295
    unsigned short usvalue = 65535; ++usvalue;  // 0
}

