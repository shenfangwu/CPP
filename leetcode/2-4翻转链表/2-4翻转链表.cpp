// 2-4翻转链表.cpp 
// 给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
// 输入：head = [1, 2, 3, 4, 5]
// 输出：[5, 4, 3, 2, 1]


#include <iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
// 思路：每个节点都保存着下一个节点的信息；双指针遍历链表，并在访问各节点时修改 next 引用指向
ListNode* reverseList(ListNode* head) {
    ListNode* pre = nullptr;
    ListNode* cur = head;
    while (cur != nullptr) {
        ListNode* tmp = cur->next;// 提前保存下一节点信息
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}
int main()
{
    ListNode* dummyhead = new ListNode(0);
    vector<int> vec{ 1,2,3,4,5 };
    int i = 0;
    ListNode* p = dummyhead;
    for (auto c : vec) {
        ListNode* s = new ListNode(vec[i++]);
        p->next = s;
        p = p->next;
    }
    ListNode*res = reverseList(dummyhead->next);
    while (res != nullptr) {
        std::cout << res->val << std::endl;
        res = res->next;
    }
}
