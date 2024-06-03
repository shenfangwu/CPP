// 3-2有效的字母异位词：https://leetcode.cn/problems/valid-anagram/description/
// 题目描述：
//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
//注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词。
//思路：使用哈希表存储【字符】-【次数】,第一个字符串存储数据，第二个字符串用于--数据，如果是字母异位符则都为0
#include <iostream>
#include<unordered_map>
using namespace std;
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    unordered_map<char, int> cmap;
    for (int i = 0; i < s.size(); i++) {
        ++cmap[s[i]];
    }
    for (int i = 0; i < t.size(); i++) {
        --cmap[t[i]];
    }
    for (int i = 0; i < s.size(); i++) {
        if (cmap[s[i]] != 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "a";
    string t = "ab";
    bool res = isAnagram(s, t);
    cout << res << endl;
    return 0;
}
//示例 1:
//
//输入: s = "anagram", t = "nagaram"
//输出 : true
//
//示例 2 :
//
//    输入 : s = "rat", t = "car"
//    输出 : false


