// 4-5.递增和递减运算符


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 练习4-18
    vector<int> v = { 1,2,3,4,5 };
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0) {
        cout << *++pbeg << endl;
    }
    // 练习4-19
    int* ptr = nullptr;
    int ival = 0;
    vector<int> vec{ 1,2,3,4,5 };
    ptr != 0 && *ptr++;// ptr如果不是空指针且ptr指向的内容也不为空，向后移动指针
    ival++ && ival;
    vec[ival++] <= vec[ival];
}
