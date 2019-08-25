#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int a = 10;
	int c = 1;
	if (a == true) {
		cout <<"true" << a << endl;
	}
	if (c == true) {
		cout << c << endl;
	}
	if (a) {
		cout << a << endl;
	}


	// ¸³ÖµÔËËã·û
	cout << (a = 5) << endl;
	int ival, jval;
	ival = jval = 10;
	cout << ival << jval << endl;

	// µÝÔöµÝ¼õ
	vector<int> v = { 1, 2, 3, -4, 5 };
	auto pbeg = v.begin();
	while (pbeg != v.end() && *pbeg >= 0)
	{
		cout << *pbeg++ << endl;
	}

	// sizeof
	cout << sizeof(v) << endl;
	string sa = "abc";
	string sb = "abcabc";
	cout << sizeof(sa) << endl;
	cout << sizeof(sb) << endl;

	return 0;
}