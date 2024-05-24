// 3-4.cpp : 迭代器介绍
//

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    //练习3.23
    /*
    vector<int> vec(10,23);
    for (auto lt = vec.begin(); lt != vec.end(); lt++) {
        *lt = *lt * 2;
    }
    for (auto c : vec) {
        std::cout << c << "\t";
    }
    std::cout << std::endl;*/

    // 使用迭代器完成二分搜索
    //vector<int> vec{ 1,2,3,4,6,7,8,10 };
    //int val = 5;
    //auto beg = vec.begin();
    //auto end = vec.end();// 左闭右开
    //auto mid = vec.begin() + (end - beg) / 2;// 迭代器之间不可以相加
    //while (mid != end)
    //{
    //    if (val > *mid) {
    //        beg = mid + 1;
    //    }
    //    else if(val < *mid) {
    //        end = mid;
    //    }
    //    else {
    //        return -1;
    //    }
    //    mid = beg + (end - beg) / 2;
    //}
    //return 0;
    
    //练习3.25 迭代器实现划分分数段
   /*
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto lt = scores.begin();
    while (cin >> grade) {
        if (grade <= 100) {
            *(lt + grade / 10) += *(lt + grade / 10) + 1;
        }
    }*/
}
