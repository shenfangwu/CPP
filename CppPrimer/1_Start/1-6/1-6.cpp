// 1-6.cpp : 书店程序

#include <iostream>
#include "../Sales_item.h"

int main()
{
    Sales_item total;// 保存下一次交易的对象变量
    // 读入第一条交易记录
    if (std::cin >> total) {
        Sales_item trans;// 保存和的变量
        while (std::cin >> trans) {
            // 若处理的是相同的书
            if (total.isbn == trans.isbn)
                total += trans;// 更新总销售额
            else
            {
                // 打印前一本书的结果
                std::cout << total << std::endl;
                total = trans;// total更新为下一本书
            }
        }
        std::cout << total << std::endl;// 打印最后一本书的结果
    }
    else {
        // 没有输入则警告
        std::cerr << "No data!" << std::endl;
        return -1;
    }
    return 0;
}
