// 2-2变量.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "../../1_Start/Sales_item.h"
#include <string>
#if 0
std::string global_str;//""
int global_int;// 0
extern int jj = 0;// 函数体内部初始化extern声明的变量将引发错误
int test() {
	int local_int; // undefined，内置类型在函数体内不能被默认初始化
	std::string local_str;// ""string不是内置类型，由string类提供默认初始化
	return 0;
}
int main()
{
	//1 用{}进行初始化更加安全
	long double ld = 3.1415926536;
	// int a{ ld }, b = { ld };// 错误，从long double 转换到 int 需要收缩转换，存在丢失信息的危险
	int c(ld), d = ld;// 不报错
	// 2 绝大数类支持无需显示初始化而定义对象，提供一个合适的默认值
	std::string  empty;// ""
	Sales_item item;// item.isbn = ""；item.units_sold = 0;item.revenue = 0.0000000
	// 练习2.9
	// std::cin >> int input_value;错误
	// int i = { 3.14 }; 错误
	// double salary = wage = 9999.99;错误 未定义
	int i = 3.14;
	// 练习2.10
	test();
	// 3 extern声明
	extern int j;
	// extern int jjj = 0;// 函数体内部初始化extern声明的变量将引发错误

	return 0;
}
#endif
// 4 嵌套的作用域
#if 0
int reused = 42;// 全局作用域
int main() {
	int unique = 0;// 块作用域
	std::cout << reused << " " << unique << std::endl;// 42 0
	int reused = 0;
	std::cout << reused << " " << unique << std::endl;// 0 0
	// 显示地访问全局变量
	std::cout << ::reused << " " << unique << std::endl;// 42 0
	return 0;
}
#endif
// 练习2.14
#if 1
int main() {
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i) {
		sum += i;
	}
	std::cout << i << " " << sum << std::endl;// 100 45
	return 0;
}
#endif