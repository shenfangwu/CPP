// 3-6.cpp 

#include <iostream>
using namespace std;

int main()
{

    // 练习3.43
    int ia[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    // 1范围for
    for (int(&row)[3] : ia) {// row是一个引用绑定一维数组
        for (int& col : row) {
            cout << col << "\t";
        }
        cout << endl;
    }
    // 2普通for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ia[i][j] << "\t";
        }
        cout << endl;
    }
    // 3指针
    for (int(*p)[3] = ia; p != ia + 3; ++p)// p指针指向的是二维数组的一维数组元素
    {
        for (int* q = *p; q != *p + 3; ++q)
        {
            printf("%d", *q);
        }

    }
}