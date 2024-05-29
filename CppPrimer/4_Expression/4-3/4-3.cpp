// 4-3逻辑和关系运算符

#include <iostream>

int main()
{
	// 练习4-10
	int i = 0;
	while (std::cin >> i && i != 42)
	{
		std::cout << i << std::endl;
	}
	// 练习4-11
	int a = 11, b = 7, c = 5, d = 3;
	a > b&& b > c&& c > d; // 不可以写成 a > b > c > d
	// 练习4-12
	int z = a != b < c;
}
