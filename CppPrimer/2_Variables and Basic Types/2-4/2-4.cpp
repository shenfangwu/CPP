// 2-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
// 1 全局作用域中，内置类型会默认初始化，因此正确
const int kk;
int main()
{
    //1 在块作用域内，内置类型不会默认初始化，但是const要求必须初始化，因此错误
    //const int k;

}
