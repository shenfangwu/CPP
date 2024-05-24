// 3-5.cpp数组

#include <iostream>
#include <vector>
using namespace std;
// 练习3.28
string sa[10];
int ia[10];
int main()
{
    // 练习3.27
    char st[12] = "fundamental";//数组存储字符字面值时最后一位存储'\0'
    // 练习3.28
    string sa2[10];
    int ia2[10];
    //练习3.31
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = i + 1;
    }
    //练习3.32
    vector<int> vec;
    for (auto c : a) {
        vec.push_back(c);
    }
    // 练习3.35
    int* p = a;
    for (int i = 0; i < 10; i++) {
        *(p + i) = 0;
    }
    // 练习3.36 
    // 比较两个数组是否相等
    int arr1[3] = { 1,2,3 };
    int arr2[3] = { 1,2,4 };
    for (int i = 0; i < 3; i++) {
        if (arr1[i] != arr2[i]) {
            std::cout << "no equal" << endl;; // 如果发现任何一个元素不相等，立即返回false
        }
    }
    // 使用==运算符比较两个向量
    std::vector<int> vec1 = { 1, 2, 3, 4, 5 };
    std::vector<int> vec2 = { 1, 2, 3, 4 };
    if (vec1 == vec2) {
        std::cout << "vec1 and vec2 are equal\n";
    }
    else {
        std::cout << "vec1 and vec2 are not equal\n";
    }
    // 练习3.39
    // 比较2个string
    string str1 = "hello";
    string str2 = "he11o";
    if (str1 == str2) {
        cout << "equal" << endl;
    }
    else if (str1 < str2) {
        cout << " str2" << endl;
    }
    else if (str1 > str2) {
        cout << "str1" << endl;
    }
    // 比较2个C风格字符串
    const char cstr1[] = { 'w','f','s' };
    const char cstr2[] = { 'w','f','ss' };
    for (int i = 0; i < 3; i++) {
        if (cstr1[i] == cstr1[i]) {
            continue;
        }
        else if (cstr1[i] > cstr1[i]) {
            cout << "cstr1" << endl;
        }
        else
        {
            cout << "cstr2" << endl;
        }
    }
    // 练习3.40
     char cstr3[13] = "hello";
     char cstr4[] = "world!";
     char cstr5[13];
     strcat(cstr3,cstr4);
     strcpy(cstr5, cstr3);
     // 练习3.41
     int ss[] = { 1,2,3,4,5 };
     vector<int> myvec(begin(ss), end(ss));// 使用数组初始化vector
     // 练习3.42
     int arr[5]; // 静态分配数组
     for (size_t i = 0; i < myvec.size(); ++i) {
         arr[i] = vec[i]; // 手动复制每个元素
     }
}