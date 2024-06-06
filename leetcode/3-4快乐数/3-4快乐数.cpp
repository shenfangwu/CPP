// 3-4快乐数：https://leetcode.cn/problems/happy-number/
//编写一个算法来判断一个数 n 是不是快乐数。
//「快乐数」 定义为：
//对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
//然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
//如果这个过程 结果为 1，那么这个数就是快乐数。
//如果 n 是 快乐数 就返回 true ；不是，则返回 false 。

// 思路：    给一个数字 nnn，它的下一个数字是什么？
//按照一系列的数字来判断我们是否进入了一个循环。
//第 1 部分我们按照题目的要求做数位分离，求平方和。
//第 2 部分可以使用哈希集合完成。每次生成链中的下一个数字时，我们都会检查它是否已经在哈希集合中。
//如果它不在哈希集合中，我们应该添加它。
//如果它在哈希集合中，这意味着我们处于一个循环中，因此应该返回 false。
#include <iostream>
#include<unordered_set>
using namespace std;
int getNum(int i) {
    int sum = 0;
    while (i) {
        sum = (i % 10) * (i % 10);
        i = i / 10;
    }
    return sum;
}
bool isHappy(int n) {
    unordered_set<int> mset;
    while (1) {
        int sum = getNum(n);
        if (sum == 1) {
            return true;
        }
        else if (mset.find(sum) != mset.end()) {
            return false;
        }
        else {
            mset.insert(sum);
        }
    }
}
int main()
{
    int n = 19;
    bool res = isHappy(n);
    cout << res << endl;
    return 0;
}
//示例 1：
//输入：n = 19
//输出：true
//解释：
//12 + 92 = 82
//82 + 22 = 68
//62 + 82 = 100
//12 + 02 + 02 = 1
//示例 2：
//输入：n = 2
//输出：false

