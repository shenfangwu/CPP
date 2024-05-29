// 4-1.cpp
#include <iostream>
using namespace std;

int func1() {
    return 1;
}
int func2() {
    return 2;
}
int main()
{
    // C++大部分运算符没有明确求值顺序
    int i = 0;
    cout << i <<" " << i++ << endl;// 不明确是先执行i++还是i
    cout <<func1()*func2()<< endl;// 不明确先执行func1还是func2
}

