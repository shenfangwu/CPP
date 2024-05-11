// 2-1基本内置类型.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    // 1 类型转换
    bool b = 42;// true
    int i = b;// 1
    i = 3.14;// 3
    double p = i;// 3.0000000000000000
    unsigned char c = -1;// 255
    signed char cc = 256;// undefined
    int j = 21;
    if (j) {// true
        std::cout << "非布尔值作为条件\n" << std::endl;
    }
    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl;// 32 
    std::cout << u2 - u1 << std::endl;// 4294967296 - 32 = 4294967264 含无符号类型的表达式不会出现负数
    unsigned u3 = 10;
    int z = -42;
    std::cout <<z + z << std::endl;// -84
    std::cout << u3 + z << std::endl;// 4294967296 - 32 = 4294967264,int类型转换为unsigned
    // 2 课后习题
    // 练习2.3
    std::cout <<"**********练习2.3*********\n" << std::endl;
    unsigned u = 10;
    u2 = 42;
    std::cout << u2 - u << std::endl;// 32
    std::cout << u - u2 << std::endl;// 4294967296 - 32 = 4294967264
    int i2 = 42;
    i = 10;
    std::cout << i2 - i << std::endl;// 32
    std::cout << i - i2 << std::endl;// -32
    std::cout << i - u << std::endl;// 0
    std::cout << u - i << std::endl;// 0
    // 练习2.6
    std::cout << "**********练习2.6*********\n" << std::endl;
    int month = 9, day = 7;
    // int month = 09;// 无效的八位数字：超过了数字8
    int day1 = 07;
    // 练习2.8
    std::cout << "**********练习2.8` *********\n" << std::endl;
    std::cout << "2\115\n";// 用转义序列先输出2M,再换到新一行
    std::cout << "2\t\115\n";// 先输出2，再输出制表符，再输出M，最后转到新一行
}

