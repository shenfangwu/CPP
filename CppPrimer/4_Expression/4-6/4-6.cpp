// 4-6.cpp
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    // 练习4-20
    vector<string> vec = { "wfs","18704028051" };
    vector<string>::iterator iter = vec.begin();
    *iter++;
    (*iter)++;// string没++运算符
    *iter.empty();// vector<string>::iterator没empty()函数
    iter->empty();//等价于(*iter).empty()
    ++*iter;// string没++运算符
    iter++->empty();
}
