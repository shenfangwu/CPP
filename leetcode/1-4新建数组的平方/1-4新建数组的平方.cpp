
//给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。
//示例 1：
//输入：nums = [-4, -1, 0, 3, 10]
//输出：[0, 1, 9, 16, 100]
//解释：平方后，数组变为[16, 1, 0, 9, 100]
//排序后，数组变为[0, 1, 9, 16, 100]
//示例 2：
//输入：nums = [-7, -3, 2, 3, 11]
//输出：[4, 9, 9, 49, 121]
//提示：
//1 <= nums.length <= 104
//- 104 <= nums[i] <= 104
//nums 已按 非递减顺序 排序

// 思路：平方以后最大的数肯定在数组两端，所以定义两个指针分别指向数组两端并且进行比较直到两个指针相遇或者左指针大于右指针时，
// 将大数存放新数组里，最后将新数组取反即可。
#include <iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    vector<int> ans;
    while (left <= right) {
        int left2 = nums[left] * nums[left];
        int right2 = nums[right] * nums[right];
        if (left2 >= right2) {
            ans.push_back(left2);
            left++;
        }
        else {
            ans.push_back(right2);
            right--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> nums = { -7, -3, 2, 3, 11 };
    vector<int> ans = sortedSquares(nums);
    return 0;
}

