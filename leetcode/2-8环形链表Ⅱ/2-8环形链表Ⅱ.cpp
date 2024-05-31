﻿// 2-8环形链表Ⅱ.cpp  https://leetcode.cn/problems/linked-list-cycle-ii/description/
// 给定一个链表的头节点  head ，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
// 如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
// 如果 pos 是 - 1，则在该链表中没有环。注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
// 不允许修改链表。
// 解题思路：【哈希表】用哈希表存储节点（存储的是地址），当遇到相同的节点时，说明该链表有环且为环初始节点
#include <iostream>
#include<unordered_set>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* detectCycle(ListNode* head) {
    unordered_set<ListNode*> visited;
    while (head != nullptr) {
        if (visited.count(head)) {
            return head;
        }
        visited.insert(head);
        head = head->next;
    }
    return NULL;
}
int main()
{
    std::cout << "Hello World!\n";
}
//输入：head = [3, 2, 0, -4], pos = 1
//输出：返回索引为 1 的链表节点
//解释：链表中有一个环，其尾部连接到第二个节点。
