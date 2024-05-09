// 1-3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "/*"<<std::endl;
    std::cout << "*/" << std::endl;
    // 错误：界定符不可以嵌套
    std::cout << /* "*/" */;
    // 错误：界定符不可以嵌套
    std::cout << /* "*/" /* "*/" */;
}
