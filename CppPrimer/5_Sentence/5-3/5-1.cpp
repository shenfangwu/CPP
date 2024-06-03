// 5-1简单语句

#include <iostream>
using namespace std;

int main()
{
    // 练习5-3
    int  sum = 0, val = 1;
    while ((sum += val,val++),val <= 10) {// 使用逗号表达式完成while的逻辑
     }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}
