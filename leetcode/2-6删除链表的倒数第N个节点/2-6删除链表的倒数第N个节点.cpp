// 2-6删除链表的倒数第N个节点
// 给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

// 思考：倒数第N个 == 正数L-N+1个，
// 利用双指针，快指针先走N步，那么快指针接下来还能走L-N步，
// 那么此时快慢指针一起走，当快指针指向尾端时，慢指针的下一个节点就是我们想要的节点
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummyhead = new ListNode(0);
    dummyhead->next = head;
    ListNode* fast = dummyhead;
    ListNode* slow = dummyhead;
    // fast移动N步
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }
    // fast、slow共同移动L-N步
    while (fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }
    // 被删除节点即slow的下一节点
    ListNode* del = slow->next;
    // 删除操作
    slow->next = slow->next->next;
    delete del;
    return dummyhead->next;
}
int main()
{
    int a[] = { 1,2,3,4,5};
    int n = 2;
    ListNode* dummynode = new ListNode(0);
    ListNode* p = dummynode;
    for (int i = 0; i < 5; i++) {
        ListNode* s = new ListNode(a[i]);
        p->next = s;
        p = p->next;
    }
    ListNode* res = removeNthFromEnd(dummynode->next, n);
    while (res!= nullptr) {
        cout << res->val << endl;
        res = res->next;
    }
}
// 输入：head = [1,2,3,4,5], n = 2
// 输出：[1, 2, 3, 5]
