// 输入数字、两数相加

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    //输入运算符>>、输出运算符<<的返回值都是左侧运算对象
    std::cin >> v1 >> v2;// std::cin 标准输入
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;// std::out 标准输出
    std::cerr << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;// std::cerr 标准错误
    std::clog << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;// std::clog 标准日志
    return 0;
}
