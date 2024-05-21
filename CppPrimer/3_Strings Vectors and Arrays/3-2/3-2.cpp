// 3-2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include<cctype>

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
    // 一次读取一个单词
    // 当用户在控制台输入数据时，数据首先被存储在缓冲区中，而不是立即被程序读取。
    // 只有当用户按下回车键时，输入的数据才会被提交到缓冲区，并开始被程序读取
    //while (cin>>str) {// 输入 abc edf回车键
     //   cout << str << endl;// 输出abc换行edf
    //}
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
        cout << "length is equal" << endl;
    }
    // 2 是否相等
    if (s1 == s2) {
        cout << "content is equal" << endl;
    }
    else{
        // 比较的结果是两个字符串第一个相异位置比较的结果
        string s3 = s1 > s2 ? s1 : s2;
        cout <<"长的是："<< s3 << endl;
    }
    // 练习 3.5
    string pinjie;
    pinjie = pinjie + ' ' + s1 + ' ' + s2;
    cout<< "拼接前的字符串:\t" <<s1<<" and "<< s2 <<'\t' << "拼接后的字符串:" << pinjie << endl;

    // 使用范围for语句统计string对象的标点符号数量
    string s{ "hello world!!!" };
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s) {
        if (ispunct(c)) {
            ++punct_cnt;
        }
    }
    cout << "统计s中标点符号的数量是:" << punct_cnt << endl;
    // 使用范围for改变字符串中的字符
    s = "Hello World!!!";
    for (auto& c : s) {
        c = toupper(c);
    }
    cout << s << endl;
    // 使用下标处理string中的部分字符
    // 处理所有字符直到遇到空白或者结尾
    for (decltype(s.size()) index = 0;
        index != s.size() && !isspace(s[index]); ++index)
        s[index] = toupper(s[index]);
    //使用下标进行随机访问
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
        << " separated by spaces. Hit ENTER when finished: "
        << endl;
    string res;
    int n;
    while (cin >> n) {
        if (n < hexdigits.size()) {
            res += hexdigits[n];// 得到对应的十六进制数字
        }
    }
    cout << "Your hex number is: " << res << endl;
    
    // 练习3.6:使用范围for将字符串内的所有字符有X代替
    for (auto& c : s) {
        c = 'X';
    }
    cout << s << endl;
    // 练习3.7
    for (char c : s) {
        c = 'X';
    }
    cout << s << endl;// 结果不变
    // 练习3.8
    // while:（1）灵活性高，可以在循环体内改变条件，从而控制循环结束 (2)一开始知道循环次数，不适用
    int i = 0;
    s = "Hello World!!!";
    while (i++ < s.size()) {
        s[i] = 'X';
    }
    cout << s << endl;
    // for:(1)适用已知循环次数的情况，可以自动控制循环次数(2)不适用复杂的控制逻辑，在循环过程中改变循环变量的值或者满足某个特定条件跳出循环时，不够灵活
    s = "Hello World!!!";
    for (int i = 0; i < s.size(); i++) {
        s[i] = 'X';
    }
    cout << s << endl;
    // 练习3.9
     string ss;
     cout << ss[0] << endl;
    
    // 练习3.10
    string sss = "hello_world!";
    string strr;
    for (auto& c : sss) {
        if (!ispunct(c)) {
            strr += c;
        }
    }
    cout << strr << endl;
    // 练习3.11
    // 这么写不够安全 不建议这么写
    const string teststr = "Keep out!";
    for (auto& c : teststr) {
        //
    }
    
    return 0;
}

