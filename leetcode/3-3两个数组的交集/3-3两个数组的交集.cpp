// 3-3两个数组的交集
// 给定两个数组 nums1 和 nums2 ，返回 它们的交集。
// 输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。
#include <iostream>
#include<vector>
#include<set>
using namespace std;
// 思路：首先使用两个集合分别存储两个数组中的元素，然后遍历第一个集合，
// 判断其中的每个元素是否在另一个集合中，如果元素也在另一个集合中，则将该元素添加到返回值
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> mset1;
    set<int> mset2;
    set<int> res;
    mset1.insert(nums1.begin(), nums1.end());
    mset2.insert(nums2.begin(), nums2.end());
    for (auto c : mset1) {
        if (mset2.count(c)) {
            res.insert(c);
        }
    }
    vector<int> ress{ res.begin(),res.end() };
    return ress;
}
int main()
{
    vector<int> nums1{ 1,2,2,1 };
    vector<int> nums2{ 2,2 };
    vector<int> res = intersection(nums1, nums2);
}
// 示例 1：

//输入：nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//输出：[2]

//示例 2：

//输入：nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
//输出：[9, 4]
//解释：[4, 9] 也是可通过的

