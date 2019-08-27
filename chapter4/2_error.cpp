#include <iostream>
#include <stdexcept>

using namespace std;
 
int main() {

	float a, b;
	while (cin >> a >> b)
	{
		try {
			if (b == 0)
				throw runtime_error("除数不能为0");
			cout << a / b << endl;
		}
		catch (runtime_error err) {
			cout << err.what();
			cout << "\n Try Again? y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
}