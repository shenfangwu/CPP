// 1-2二分查找:https://leetcode.cn/problems/binary-search/description/
/*
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
示例 1:

输入: nums = [-1,0,3,5,9,12], target = 9
输出: 4
解释: 9 出现在 nums 中并且下标为 4

示例 2:

输入: nums = [-1,0,3,5,9,12], target = 2
输出: -1
解释: 2 不存在 nums 中因此返回 -1

 

提示：

    你可以假设 nums 中的所有元素是不重复的。
    n 将在 [1, 10000]之间。
    nums 的每个元素都将在 [-9999, 9999]之间*/
#include <iostream>
#include <vector>
using namespace std;
// 关键字： 有序数组、无重复元素
int search(vector<int>& nums, int target) {
    int len = nums.size() - 1;
    int left = 0, right = len;
 // 循环不变量，保持左闭右闭原则
    while (left <= right) {
        if (target == nums[(left + right) / 2]) {
            return (left + right) / 2;
        }
        else if (target > nums[(left + right) / 2]) {
            left = (left + right) / 2 + 1;
        }
        else {
            right = (left + right) / 2 - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = { -1,0,3,5,9,12 };
    int target = 9;
    cout << search(nums, target) << endl;
    return 0;
}

