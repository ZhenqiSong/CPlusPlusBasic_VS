#include <iostream>
#include <vector>

using namespace std;

int main() {

	// 初始化
	vector<string> svec; // 默认初始化，不包含任何元素
	vector<string> svec2(svec); //把svec的值拷贝给svec2

	vector<string> articles = { "a", "an", "the" }; // 列表初始化，c++11，必须是花括号

	vector<int> ivec(10, -1); // 10个int类型，每个都是-1

	vector<int> ivec1(10); //使用10个默认值进行初始化，int是0，string是空字符串

	vector<string> svec3{ 10, "hi" };// 等价于svec3(10, "hi")

	// 将0-99依次加入向量
	vector<int> v2;
	for (int i = 0; i != 100; i++) {
		v2.push_back(i);
	}

	vector <int> v3{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto& i : v3) {
		i *= i;
	}
	for (auto i : v3) {
		cout << i << " ";
	}

	cout << endl;
	for (decltype(v3.size()) i = 0; i < v3.size(); i++) {
		cout << v3[i] << " ";
	}

	return 0;
}