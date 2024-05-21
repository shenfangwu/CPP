// 2-2移除链表元素.cpp
//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。 

#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* removeElements(ListNode* head, int val) {
    ListNode* Head = new ListNode(0);// 创建虚拟头节点使得删除头节点与其他节点的操作一致
    Head->next = head;
    ListNode* cur = Head;// 移动指针指向虚拟头节点
    while (cur->next != nullptr) {
        if (cur->next->val == val) {//判断当前指针的下一个节点的值是否是要求删除的值
            ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
        }
        else {
            cur = cur->next;
        }
    }
    head = Head->next;
    delete Head;
    return head;
}
int main(){
    int a[] = { 6,5,4,3,6,2,1 };
    ListNode* L = (ListNode*)malloc(sizeof(ListNode));
    ListNode* s;// 指向新节点
    L->next = nullptr;
    int num = 0;
    while (num < 7) {// 头插法创建链表 结果是1 2 6 3 4 5 6
        s = (ListNode*)malloc(sizeof(ListNode));
        s->next = L->next;
        s->val = a[num++];
        L->next = s;
    }
    ListNode* res = removeElements(L->next, 6);
    // 遍历链表
    ListNode* p = res;
    while (p != nullptr) {
        if (p->next != nullptr) {
            cout << p->val << "->";
        }
        else {
            cout << p->val;
        }
        p = p->next;
    }
    return 0;
}


