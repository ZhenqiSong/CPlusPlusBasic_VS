#include <iostream>
#include<initializer_list>

using namespace std;

void print(initializer_list<int> a) {
	for (auto s = a.begin(); s != a.end(); ++s) {
		cout << *s << endl;
	}
}

int main() {

	int ia = 5;
	print({ ia, 6 });

	return 0;
}