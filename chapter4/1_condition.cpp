#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string s = "hello, world";
	string s2 = "hello, world";
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	auto iter = s.begin();

	while (iter != s.end())
	{
		switch (*iter)
		{
		case 'a':
			++aCnt;
			break;
		case 'e':
			++eCnt;
			break;
		case 'i':
			++iCnt;
			break;
		case 'o':
			++oCnt;
			break;
		case 'u':
			++uCnt;
			break;
		default:
			break;
		}
		++iter;
	}
	cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt << endl;

	unsigned vowelCnt = 0;

	iter = s.begin();
	while (iter != s.end())
	{
		switch (*iter)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			++vowelCnt;
			break;
		default:
			break;
		}
		++iter;
	}
	cout << vowelCnt << endl;
	return 0;
}