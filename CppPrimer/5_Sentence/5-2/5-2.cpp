// 5-2语句作用域

#include <iostream>
int get_num() {
    return 1;
}
int main()
{
    while (int i = get_num()) {
        std::cout << i << std::endl;
    }
    i = 0;// 循环外不可以访问i

}


