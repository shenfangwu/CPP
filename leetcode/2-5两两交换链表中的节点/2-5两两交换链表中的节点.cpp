// 两两交换链表中的节点
//给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）
// 正常模拟即可，用两个指针 一个指向第一个 一个指向第二个这种是不可行的，因为在后续的变动中，第二个指针的位置会变动；
// 一个指针即可
#include <iostream>
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* swapPairs(ListNode* head) {
    // 没有元素或者只有一个元素 直接返回
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode* dummyhead = new ListNode(0);// 创建虚拟节点，这样就可以统一对头节点的操作了
    dummyhead->next = head;
    ListNode* p = dummyhead;
    while (p->next != nullptr && p->next->next != nullptr) {// 空指针没有next
        ListNode* temp = p->next;// 保存节点信息
        p->next = p->next->next;
        temp->next = p->next->next;// 如果没有p->next->next != nullptr的话，这里会报错；因为 p->next = p->next->next，p已经走两步了，再向下走一步就会有可能报错
        p->next->next = temp;
        p = p->next->next;
    }
    return dummyhead->next;
}
int main()
{
    int num[] = {1,2,3,4};
    ListNode* dummyhead = new ListNode(0);
    ListNode* p = dummyhead;
    // 创建链表
    for (int i = 0; i < 4; i++) {
        ListNode* s = new ListNode(num[i]);
        p->next = s;
        p = p->next;
    }
    // 调用
    ListNode* head = swapPairs(dummyhead->next);
    // 打印链表
    p = head;
    while (p!=nullptr)
    {
        std::cout << p->val << "\t";
        p = p->next;
    }
}
//输入：head = [1, 2, 3, 4]
//输出：[2, 1, 4, 3]