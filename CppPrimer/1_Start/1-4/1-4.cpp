// 控制流
#include <iostream>

int main()
{
   //1 while语句求1到10这个10个数之和
	int sum = 0; int val = 1;
	while (val <=10)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	//2 for语句求1到10这个10个数之和
	sum = 0;
	for (int val = 1; val <= 10; val++) {
		sum += val;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	//3 读取不定量数据求和
	//sum = 0; int value = 0;
	// 文件结束符是ctrl+D
	//while (std::cout<<"输入数据"&&std::cin >> value)
	//{
		//sum += value;
	//}
	//std::cout << "Sum is: " << sum << std::endl;
	// 4 if语句
	int currVal = 0; val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;// 计数器
		while (std::cin >> val) {
			if (val == currVal) {
				cnt++;
			}
			else {
				std::cout << currVal << "occurs" 
					<< cnt << "times" << std::endl;
				currVal = val;
				cnt = 1;// 重制计数器
			}
		}
		std::cout << currVal << "occurs" << cnt << "times" << std::endl;// 打印最后一个值的次数
	}
	return 0;
}

