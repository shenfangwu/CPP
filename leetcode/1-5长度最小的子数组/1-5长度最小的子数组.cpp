// 1-5长度最小的子数组.cpp
/*
给定一个含有 n 个正整数的数组和一个正整数 target 。
找出该数组中满足其总和大于等于 target 的长度最小的 连续
子数组
 [numsl, numsl+1, ..., numsr-1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。
示例 1：
输入：target = 7, nums = [2,3,1,2,4,3]
输出：2
解释：子数组 [4,3] 是该条件下的长度最小的子数组。
示例 2：
输入：target = 4, nums = [1,4,4]
输出：1
示例 3：
输入：target = 11, nums = [1,1,1,1,1,1,1,1]
输出：0
提示：
    1 <= target <= 109
    1 <= nums.length <= 105
    1 <= nums[i] <= 105

进阶：

    如果你已经实现 O(n) 时间复杂度的解法, 请尝试设计一个 O(n log(n)) 时间复杂度的解法。

*/
// 解法：滑动窗口 窗口就是 满足其和 ≥ s 的长度最小的 连续 子数组。
// 窗口的起始位置如何移动：如果当前窗口的值大于等于s了，窗口就要向前移动了（也就是该缩小了）。
// 窗口的结束位置如何移动：窗口的结束位置就是遍历数组的指针，也就是for循环里的索引。
#include <iostream>
#include <vector>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int res = INT32_MAX;
    int sum = 0;
    int i = 0;// 表示滑动窗口的起始位置
    int sublen = 0;
    for (int j = 0; j < nums.size(); j++) {// j表示滑动窗口的结束位置
        sum += nums[j];
        while (sum >= target) {// 当前窗口的值大于等于s了，窗口就要向前移动了
            sublen = j - i + 1;
            res = res < sublen ? res : sublen;
            sum -= nums[i++];//  这里体现出滑动窗口的精髓之处，不断变更i（子序列的起始位置
        }
    }
    return res == INT32_MAX ? 0 : res;
}
int main()
{
    vector<int> nums = { 2,3,1,2,4,3 };
    int res = minSubArrayLen(7, nums);
    return 0;
}
