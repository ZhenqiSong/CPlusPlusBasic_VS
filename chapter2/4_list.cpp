#include <iostream>
#include <string>

using namespace std;

int main() {

	/*unsigned cnt = 42;
	constexpr unsigned sz = 42;
	int arr[10];
	int* parr[sz];*/
	// string bad[cnt];

	// ��ʾ��ʼ��
	const unsigned sz = 3;
	int ial[sz] = { 0, 1, 2 };
	int a2[] = { 0, 1, 2 }; // ������������Զ��ƶ����鳤��
	int a3[5] = { 0, 1, 2 }; // �����δָ����Ԫ�ػ����Ĭ�ϳ�ʼ��
	string a4[3] = { "hi", "bye" };

	//�ַ�����
	char c1[] = { 'C', '+', '+' };
	char c2[] = "C++";

	// ��������
	int* ptrs[10];
	// int& refs[10];
	int(*Parray)[3] = &ial;
	int(&arrRef)[3] = ial;

	int aa[3] = { 1, 2, 3 };
	auto ab = aa;
	cout << *ab << endl;
	decltype(aa) ia3 = { 0, 1, 3 }; // ����aa���ƶ�ia3������Ϊ��СΪ3������

	int* e = &aa[3];
	for (int* b = aa; b != e; ++b) {
		cout << *b << endl;
	}

	// begin, end
	int ia[] = { 0, 2, 4, 6, 8 };
	int* beg = begin(ia);
	int* last = end(ia);

	int last1 = *(ia + 4);
	int last2 = *ia + 4;
	cout << last1 << " " << last2 << endl;

	// ��ά����
	int iia[3][4];
	int iaa[3][4] = {
		{0, 1, 2, 3},
	{4,5,6,7},
	{8, 9, 10, 11}
	};

	for (auto& row : iaa) {
		for (auto& col : row) {
			cout << col;
		}
	}
	cout << endl;
	for (auto p = iaa; p != iaa + 3; ++p) {
		for (auto q = *p; q != *p + 4; ++q) {
			cout << *q << ' ';
		}
	}

	for (auto p = begin(iaa); p != end(iaa); ++p) {
		for (auto q = begin(*p); q != end(*p); q++) {
			cout << *q << endl;
		}
	}

	using int_array = int[4];
	typedef int int_array[4];
	return 0;
}