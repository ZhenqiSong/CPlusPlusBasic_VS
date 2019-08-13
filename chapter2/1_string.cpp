#include <iostream>
#include <string>
using namespace std;

int main() {
	
	// string 的初始化
	string s1;
	string s2 = s1;
	string s3 = "hiye"; // 除了最后的空字符串，都拷贝到了s3中
	string s4(10, 'c'); // 类似与python 中的 "c" * 10
	string s5 = string("123");

	cout << s4 << endl;
	cout << s5 << endl;

	//cin >> s1 ;
	//cout << s1 << endl;

	//string line;
	//while (getline(cin, line))
	//{
	//	if (!line.empty()) {
	//		cout << line << endl;
	//		string::size_type len_line = line.size();
	//		auto len_line2 = line.size();
	//		decltype(line.size()) len_line3 = line.size();
	//		cout << len_line3 << endl;
	//	}			
	//}	

	// 加法
	string s_a = "hello";
	string s_b = "world";
	cout << s_a + s_b << endl;
	cout << s_a + "," + s_b << endl;
	//cout << "hello" + "," + s_b << endl;

	string str("some thing");
	for (auto c : str) {
		cout << c << endl;
	}

	string s("Hello World");
	for (auto& c : s) {
		c = toupper(c);
	}
	cout << s << endl;

	s = "hello world";
	for (decltype(s.size()) index = 0;
		index != s.size() && !isspace(s[index]); index++) {
		s[index] = toupper(s[index]);
	}
	cout << s << endl;

	return 0;
}