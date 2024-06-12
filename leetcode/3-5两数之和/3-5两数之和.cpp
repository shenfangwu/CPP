// 3-5两数之和:https://leetcode.cn/problems/two-sum/solutions/434597/liang-shu-zhi-he-by-leetcode-solution/
//题目描述：给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
//你可以按任意顺序返回答案。
// 思路：需要一个集合来存放我们遍历过的元素，然后在遍历数组的时候去询问这个集合，某元素是否遍历过，也就是是否出现在这个集合。
// 1 为什么会想到用哈希表？查询某元素是否在集合里，适合使用哈希表
// 2 哈希表为什么用map？因为要求返回数组的下标，所以采用KEY-VALUE格式存储数据
// 3 本题map是用来存什么的？存放我们遍历过的元素
// 4 map中的key和value用来存什么的？元素值以及下标
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map <int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        // 遍历当前元素，并在map中寻找是否有匹配的key
        auto iter = map.find(target - nums[i]);
        if (iter != map.end()) {
            return { iter->second, i };
        }
        // 如果没找到匹配对，就把访问过的元素和下标加入到map中
        map.insert(pair<int, int>(nums[i], i));
    }
    return {};
}
int main()
{
    vector<int> nums{ 1,2,3,4,5 };
    vector<int> res = twoSum(nums, 7);
    return 0;
}
//示例 1：
//
//输入：nums = [2, 7, 11, 15], target = 9
//输出：[0, 1]
//解释：因为 nums[0] + nums[1] == 9 ，返回[0, 1] 。
