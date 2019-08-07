#include <iostream>
using namespace std;

int main() {
	
	// string 的初始化
	string s1;
	string s2 = s1;
	string s3 = "hiye"; // 除了最后的空字符串，都拷贝到了s3中
	string s4(10, 'c'); // 类似与python 中的 "c" * 10

	cout << s4 << endl;



	return 0;
}