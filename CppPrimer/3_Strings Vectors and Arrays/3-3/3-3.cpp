// 3-3标准库类型vector

#include <iostream>
#include <vector>
#include<string>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // 练习3.12
	//vector<vector<int>> ivec;
	//// vector<string>svec = ivec;
	//vector<string> svec(10, "null");// 10个值为"null"的string
	//// 练习3.13
	//vector<int> v1;
	//vector<int> v2(10);
	//vector<int> v3(10, 42);
	//vector<int> v4{ 10 };
	//vector<int> v5{ 10,42 };
	//vector<string> v6{ 10 };
	//vector<string> v7{ 10,"hi" };
	//// 练习3.14
	//vector<int> vec;
	//int x;
	//cout << "输出的是vector<int>" << endl;
	//while (cin >> x) {
	//	vec.push_back(x);
	//}
	//for (auto c : vec) {
	//	cout << c << endl;
	//}
	//// 清除错误状态
	//std::cin.clear();//防止上一个输入ctrl+Z后输入流进入错误状态导致下一个输入流提前结束
	//// 练习3.15
	//string str;
	//vector<string> vecstr;
	//cout << "输出的是vector<string>" << endl;
	//while (cin >> str) {
	//	vecstr.push_back(str);
	//}
	//for (auto c : vecstr) {
	//	cout << c << endl;
	//}
	//// 清除错误状态
	//std::cin.clear();//防止上一个输入ctrl+Z后输入流进入错误状态导致下一个输入流提前结束

	//// 以10分为一个分数段统计成绩的数量：0-9，10-19
	//vector<unsigned> scores(11, 0);
	//unsigned grade;
	//while (cin >> grade) {
	//	if (grade <= 100) {
	//		++scores[grade / 10];
	//	}
	//}
	
	//// 练习3.17
	//vector<string> vec;
	//string str;
	//while (cin >> str) {// 读入一组词
	//	vec.push_back(str);
	//}
	//
	//for (auto& c : vec) {// 将每一个字符变成大写字母
	//	for (auto& a : c) {
	//		a = toupper(a);
	//	}
	//}	
	//for (auto c : vec) {// 输出改变的结果，每个词占据一行
	//	cout << c << endl;
	//}
	// 练习3.20
	vector<int> vec;
	int x;
	while (cin >> x) {// 读入一组整数并存入vector
		vec.push_back(x);
	}
	//for (int i = 0; i < vec.size()-1; i++) {// 将每对相邻整数的和输出
	//	cout << vec[i] + vec[i + 1] << endl;
	//}
	int j = vec.size();
	for (int i = 0; i <=j/2; i++) {// 输出第一个和最后一个之和，以此类推
		cout << vec[i] + vec[vec.size()-i-1] << endl;
	}
}

