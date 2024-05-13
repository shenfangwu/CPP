// 2-4复合类型
//

#include <iostream>
// 练习2.16
#if 0
int main()
{
    int i = 0, & r1 = i;
    double d = 0, & r2 = d;
    r2 = 3.1415926356;
    r2 = r1;
    i = r2;
    r1 = d;
    return 0;
}
#endif
// 练习2.17
#if 0
int main()
{
    int i = 0, & ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
    return 0;
}
#endif
#if 1 
int main() {
    int i = 0;
    // double* dp = &i;int*不可以初始化double*
    // int* ip = i;int不可以初始换int*
    int* p = &i;
}
#endif
