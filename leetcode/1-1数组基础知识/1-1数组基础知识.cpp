// 1-1 数组基础知识.cpp
// 1 数组是存放在连续内存空间的相同类型的集合
// 2 可以通过下标索引的方式获取下标下对应的数据
// 注意：（1）数组下标从0开始（2）数组内存空间地址是连续的===》删除增加元素时需要移动其他元素
// 3 对于C++来说，二维数组的内存空间地址是连续的
#include <iostream>
using namespace std;
void test_arr() {
    int array[2][3] = {
        {0, 1, 2},
        {3, 4, 5}
    };
    cout << &array[0][0] << " " << &array[0][1] << " " << &array[0][2] << endl;
    cout << &array[1][0] << " " << &array[1][1] << " " << &array[1][2] << endl;
}

int main() {
    test_arr();
}
