//5-4迭代语句for while do-while 范围for 
#include <unordered_map>
#include <iostream>
#include <string>
#include <sstream>
#include<vector>
using namespace std;
bool isTrue(vector<int>nums1,vector<int>nums2) {
    int len1 = nums1.size();
    int len2 = nums2.size();
    vector<int> nums3;
    int len = len1 > len2 ? len1 : len2;
    for (int i = 0; i < len; i++) {
        if (nums1[i] != nums2[i]) {
            return false;
        }  
    }
    return true;
}
int main() {
    // 练习5.14
    std::unordered_map<std::string, int> map;
    std::string line;
    while (std::getline(std::cin, line)) {// cin>>line是不识别空格与换行的
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            auto iter = map.find(word);
            if (iter != map.end()) {
                iter->second++;
            }
            else {
                map.insert({ word, 1 });
            }
        }
    }
    // 练习5.17
    vector<int> nums1{ 1,2,3,4,5 };
    vector<int> nums2{ 1,2,3 };
    isTrue(nums1, nums2);
    // 练习5.19
    do {
        string s1, s2;
        cout << "input two strings: " << endl;
        cin >> s1 >> s2;
        if (s1.size() == s2.size())
            cout << "the lengths of two strings are equal" << endl;
        else
            cout << "the shorter string is: " << (s1.size() > s2.size() ? s2 : s1) << endl;
    } while (cin);
    return 0;
}