// 2-7链表相交
//给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表没有交点，返回 null 。
// 相交节点 从尾部开始 将链表对齐，长链表的指针先移动到对齐的位置 然后再一一比较 
#include <iostream>
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    int lenA = 0;
    int lenB = 0;
    ListNode* p = headA;
    ListNode* q = headB;
    // 得到A链表长度
    while (p != nullptr) {
        p = p->next;
        lenA++;
    }
    // 得到B链表长度
    while (q != nullptr) {
        q = q->next;
        lenB++;
    }
    p = headA;
    q = headB;
    if (lenA < lenB) {
        std::swap(lenA, lenB);
        std::swap(p, q);
    }
    int gap = lenA - lenB;
    // 长链表的指针走gap步
    while (gap != 0) {
        p = p->next;
        gap--;
    }
    // 从此节点开始一个一个进行比对（注意是指针本身相同）
    while (p != nullptr) {
        if (p == q) {
            return p;
        }
        p = p->next;
        q = q->next;
    }
    return NULL;
}
int main()
{
    
     return 0;
}
//
//输入：intersectVal = 8, listA = [4, 1, 8, 4, 5], listB = [5, 0, 1, 8, 4, 5], skipA = 2, skipB = 3
//输出：Intersected at '8'
//解释：相交节点的值为 8 （注意，如果两个链表相交则不能为 0）。
//从各自的表头开始算起，链表 A 为[4, 1, 8, 4, 5]，链表 B 为[5, 0, 1, 8, 4, 5]。
//在 A 中，相交节点前有 2 个节点；在 B 中，相交节点前有 3 个节点。