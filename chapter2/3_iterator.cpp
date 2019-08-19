# include <iostream>
# include<string>
# include <vector>

using namespace std;

int main() {

	string s("some string");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout << s << endl;

	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		* it = toupper(*it);
	cout << s << endl;

	vector<int> text = { 1, 2, 3, 4, 5, 6, 8, 52 };
	int sought = 3;
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;

	while (mid != end && *mid != sought)
	{
		if (sought < *mid) {
			end = mid;
		}
		else {
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}
	cout << *mid << endl;

	return 0;
}
