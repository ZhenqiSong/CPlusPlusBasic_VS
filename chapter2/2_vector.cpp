#include <iostream>
#include <vector>

using namespace std;

int main() {

	// ��ʼ��
	vector<string> svec; // Ĭ�ϳ�ʼ�����������κ�Ԫ��
	vector<string> svec2(svec); //��svec��ֵ������svec2

	vector<string> articles = { "a", "an", "the" }; // �б��ʼ����c++11�������ǻ�����

	vector<int> ivec(10, -1); // 10��int���ͣ�ÿ������-1

	vector<int> ivec1(10); //ʹ��10��Ĭ��ֵ���г�ʼ����int��0��string�ǿ��ַ���

	vector<string> svec3{ 10, "hi" };// �ȼ���svec3(10, "hi")

	// ��0-99���μ�������
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