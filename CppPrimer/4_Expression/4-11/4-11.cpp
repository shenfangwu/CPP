// 4-11类型转换

#include <iostream>
#include <string>
using namespace std;
int main()
{
   // 练习4-36
	int i = 1;
	double d = 3.0;
	i *= static_cast<int>(d);
	// 练习4-37
	double d;
	const string* ps;
	char* pc;
	void* pv;
	pv = static_cast<void*>(const_cast<string*>(ps));
	i = static_cast<int>(*pc);
	pv = static_cast<void*>(&d);
	pc = static_cast<char*>(pv);
}

