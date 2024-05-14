// 2-5.cpp : 
//

#include <iostream>

int main()
{
	//1指针、常量和类型别名
	typedef char* pstring;// 指向char的指针
	const pstring cstr = 0;// cstr是指向char的常量指针
	const pstring* ps;//ps是一个指针，它指向的对象是指向char的常量指针
	const char* pr;//pr是一个指针，它指向的对象是const char
	//2 auto
	int i = 0, & r = i;
	auto a = r;
	const int ci = i,&cr = ci;
	//2.1 auto会自动忽略顶层const
	auto b = ci;//int 
	auto c = cr;// int
	auto d = &i;// int*
	auto e = &ci;//const int*
	//2.2 只有明确指出const 才可以让auto不忽略
	const auto f = ci;
	auto& g = ci;
	auto& h = ci;
	//2.3 可以为常量引用绑定字面值
	const auto& j = 42;
	const int& jj = 42;
	// 练习2.35
	const int i = 42;
	auto j = i;// int
	const auto& k = i;//const int&
	auto* p = &i;// int*
	const auto j2 = i, & k2 = i;// const int\const int&
	//3 decltype
	const int ci = 0, &cj = ci;
	int c1 = 9;
	int* p = &c1;
	decltype(ci) x = 0;
	// 3.1decltype(引用)的结果是引用类型
	decltype(cj) y = x;
	// 3.2 decltype(解引用)的结果是引用类型
	decltype(*p) z = x;
	// 3.3 decltype((variable))结果是引用 
	decltype((c1)) d = x;
	// 练习2.36
	int a = 3, b = 4;
	decltype(a) c = a;// int
	decltype((b)) d = a;//int&
	++c;// int
	++d;// int*
	// 练习2.37
	int a = 3, b = 4;
	decltype(a) c = a;// int
	decltype(a = b) d = a;// int& 赋值是产生引用的表达式 其引用类型为左值类型
}

