// 3-2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // 练习3.2 
    string str;
    //一次读入一整行
    /*while (getline(cin,str)){
        cout << str << endl;
    }*/
    // 练习3.3
    // 1 一次读取一个单词
    // 当用户在控制台输入数据时，数据首先被存储在缓冲区中，而不是立即被程序读取。
    // 只有当用户按下回车键时，输入的数据才会被提交到缓冲区，并开始被程序读取
    while (cin>>str) {// 输入 abc edf回车键
        cout << str << endl;// 输出abc换行edf
    }
    // 练习3.4
    // 1 是否等长
    string s1 = "test1";
    string s2 = "test12";
    if (s1.size() > s2.size()) {
        cout << "s1" << endl;
    }
    else if (s1.size() < s2.size()) {
        cout << "s2" << endl;
    }
    else {
        cout << "equal" << endl;
    }
    // 2 是否相等

    return 0;
}

