// 2-3设计链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//你可以选择使用单链表或者双链表，设计并实现自己的链表。
//单链表中的节点应该具备两个属性：val 和 next 。val 是当前节点的值，next 是指向下一个节点的指针 / 引用。
//
//如果是双向链表，则还需要属性 prev 以指示链表中的上一个节点。假设链表中的所有节点下标从 0 开始。
//
//实现 MyLinkedList 类：
//
//MyLinkedList() 初始化 MyLinkedList 对象。
//int get(int index) 获取链表中下标为 index 的节点的值。如果下标无效，则返回 - 1 。
//void addAtHead(int val) 将一个值为 val 的节点插入到链表中第一个元素之前。在插入完成后，新节点会成为链表的第一个节点。
//void addAtTail(int val) 将一个值为 val 的节点追加到链表中作为链表的最后一个元素。
//void addAtIndex(int index, int val) 将一个值为 val 的节点插入到链表中下标为 index 的节点之前。如果 index 等于链表的长度，那么该节点会被追加到链表的末尾。如果 index 比长度更大，该节点将 不会插入 到链表中。
//void deleteAtIndex(int index) 如果下标有效，则删除链表中下标为 index 的节点。
//

#include <iostream>
// 链表节点
struct LinkNode {
    int val;
    LinkNode* next;
    LinkNode() :val(0), next(nullptr) {};
    LinkNode(int x) :val(x), next(nullptr) {};
};
// 链表类
class MyLinkedList {
public:
    // 1初始化 MyLinkedList 对象。
    MyLinkedList() {
        dummyhead = new LinkNode();// 创建虚拟头节点
        LinkNode* p = dummyhead;
        len = 0; // 初始化链表长度
    }
    // 2获取链表中下标为 index 的节点的值。如果下标无效，则返回 - 1 。
    int get(int index) {
        if (index > len - 1 || index < 0) return -1;
        LinkNode* p = dummyhead;
        int count = 0;
        while (p->next != nullptr)
        {// 迭代链表，直到等于index时获取val
            if (index == count) {
                return p->next->val;
            }
            count++;
            p = p->next;
        }
        return 0;
    }
    // 3将一个值为 val 的节点插入到链表中第一个元素之前。在插入完成后，新节点会成为链表的第一个节点。
    void addAtHead(int val) {
        LinkNode* p = dummyhead;
        LinkNode* s = new LinkNode(val);
        s->next = p->next;
        p->next = s;
        len++;// 别忘记更新长度
        return;
    }
    // 4将一个值为 val 的节点追加到链表中作为链表的最后一个元素。
    void addAtTail(int val) {
        LinkNode* s = new LinkNode(val);
        LinkNode* q = dummyhead;
        while (q->next != nullptr)
        {
            q = q->next;
        }
        q->next = s;
        len++;
        return;
    }
    // 5将一个值为 val 的节点插入到链表中下标为 index 的节点之前。如果 index 等于链表的长度，那么该节点会被追加到链表的末尾。
    // 如果 index 比长度更大，该节点将 不会插入 到链表中。
    void addAtIndex(int index, int val) {
        if (index > len || index < 0) return;
        LinkNode* s = new LinkNode(val);
        LinkNode* p = dummyhead;
        int count = 0;
        while (count <= len)
        {
            if (count == index) {
                s->next = p->next;
                p->next = s;
                len++;
                return;
            }
            count++;
            p = p->next;
        }
    }
    // 6如果下标有效，则删除链表中下标为 index 的节点。
    void deleteAtIndex(int index) {
        if (index > len - 1 || index < 0) return;
        int count = 0;
        LinkNode* p = dummyhead;
        LinkNode* q = dummyhead->next;
        while (q != nullptr)
        {
            if (index == count) {
                p->next = q->next;
                delete q;
                len--;
                return;
            }
            count++;
            p = p->next;
            q = q->next;
        }
    }
    // 7打印当前链表
    void print() {
        LinkNode* p = dummyhead;
        while (p->next != nullptr) {
            std::cout << p->next->val << "\t";
            p = p->next;
        }
        std::cout << std::endl;
        return;
    }
private:
    LinkNode* dummyhead;// 虚拟头节点
    int len = 0;// 链表长度
};

int main()
{
    MyLinkedList L;
    L.addAtHead(7);
    L.addAtHead(2);
    L.addAtHead(1);
    L.print();
    L.addAtIndex(3, 0);
    L.print();
    L.deleteAtIndex(2);
    L.addAtHead(6);
    L.addAtTail(4);
    L.print();
    L.get(4);
    return 0;
}
//示例：
//
//输入
//["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
//[[], [1], [3], [1, 2], [1], [1], [1]]
//输出
//[null, null, null, null, 2, null, 3]
//
//解释
//MyLinkedList myLinkedList = new MyLinkedList();
//myLinkedList.addAtHead(1);
//myLinkedList.addAtTail(3);
//myLinkedList.addAtIndex(1, 2);    // 链表变为 1->2->3
//myLinkedList.get(1);              // 返回 2
//myLinkedList.deleteAtIndex(1);    // 现在，链表变为 1->3
//myLinkedList.get(1);              // 返回 3
//
//提示：
//
//0 <= index, val <= 1000
//请不要使用内置的 LinkedList 库。
//调用 get、addAtHead、addAtTail、addAtIndex 和 deleteAtIndex 的次数不超过 2000 。