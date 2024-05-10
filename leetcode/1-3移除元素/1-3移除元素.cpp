﻿// 1-3移除元素.cpp 
/*给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
说明:
为什么返回数值是整数，但输出的答案是数组呢?
请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。
你可以想象内部操作如下:
// nums 是以“引用”方式传递的。也就是说，不对实参作任何拷贝
int len = removeElement(nums, val);
// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
示例 1：

输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2]
解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。例如，函数返回的新长度为 2 ，而 nums = [2,2,3,3] 或 nums = [2,2,0,0]，也会被视作正确答案。

示例 2：

输入：nums = [0,1,2,2,3,0,4,2], val = 2
输出：5, nums = [0,1,3,0,4]
解释：函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。注意这五个元素可为任意顺序。你不需要考虑数组中超出新长度后面的元素。

提示：

    0 <= nums.length <= 100
    0 <= nums[i] <= 50
    0 <= val <= 100

*/

#include <iostream>
#include<vector>
using namespace std;
/*
由于题目要求删除数组中等于val的元素，因此输出数组的长度一定小于等于输入数组的长度，我们可以把输出的数组直接写在输入数组上  
右指针right指向当前将要处理的元素，左指针left指向下一个将要赋值的位置。
    如果右指针指向的元素不等于 val，它一定是输出数组的一个元素，我们就将右指针指向的元素复制到左指针位置，然后将左右指针同时右移；
    如果右指针指向的元素等于 val，它不能在输出数组里，此时左指针不动，右指针右移一位。
整个过程保持不变的性质是：区间[0,left)中的元素都不等于val。当左右指针遍历完输入数组以后，left的值就是输出数组的长度。
*/
int removeElement(vector<int>& nums, int val) {
    class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int n = nums.size();
            int left = 0;
            for (int right = 0; right < n; right++) {
                if (nums[right] != val) {
                    nums[left] = nums[right];
                    left++;
                }
            }
            return left;
        }
    };
}
int main()
{
    vector<int> nums = { 3,2,2,3 };
    int val = 3;
    removeElement(nums, val);
    
}

