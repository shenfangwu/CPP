// 1-5.cpp : 类简介
/*
class Sales_item{
public:
    Sales_item(const std::string &book):isbn(book),units_sold(0),revenue(0.0){}
    Sales_item(std::istream &is){ is >> *this;}
    friend std::istream& operator>>(std::istream &,Sales_item &);
    friend std::ostream& operator<<(std::ostream &,const Sales_item &);
public:
    Sales_item & operator+=(const Sales_item&);
public:
    double avg_price() const;
    bool same_isbn(const Sales_item &rhs)const{
    return isbn == rhs.isbn;
    }
    Sales_item():units_sold(0),revenue(0.0){}
public:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};
 */
#include <iostream>
#include "../Sales_item.h"
// 1读写类对象
#if 0
int main()
{
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;
	return 0;
}
#endif
// 2类对象的加法
#if 0
int main()
{
    Sales_item item1,item2;
    std::cin >> item1 >> item2;
    std::cout << item1+item2 << std::endl;
    return 0;
}
#endif
// 3初识成员函数
#if 0
int main() {
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    // 检查类别相同不
    if (item1.isbn() == item2.isbn()) {
        std::cout << item + item2 << std::endl;
        return 0;
    }
    else {
        std::cerr << "DATA MUST REFER TO SAME ISBN"
            << std::endl;
        return -1;
    }
}
#endif