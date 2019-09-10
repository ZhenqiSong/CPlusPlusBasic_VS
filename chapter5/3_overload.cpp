#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
	return a + b;
}

float add(float a, float b) {
	return a + b;
}

string add(string& a, string& b) {
	return a + b;
}


int main() {

	int i_a = 1, i_b = 3;
	float f_a = 3.14, f_b = 5.5;
	string s_a = "hello", s_b = "world";

	cout << add(i_a, i_b) << endl;
	cout << add(f_a, f_b) << endl;
	cout << add(s_a, s_b) << endl;

	return 0;
}