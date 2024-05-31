// 4-7条件运算符

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 练习4-21
    vector<int> vec{ 1,2,3,4,5 };
    auto lt = vec.begin();
    while (lt != vec.end()) {
        /*if (*lt % 2) {
            *lt = *lt + *lt;
        }*/
        *lt = *lt % 2 ? *lt * 2 : *lt;// 使用条件运算符代替if语句
        ++lt;
    }
    // 练习4-23
    string s = "word";
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");// 条件运算符的优先级低、且满足右结合律
    return 0;
}

