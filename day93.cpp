// C++ code for the above approach:
#include <iostream>
using namespace std;

string maxOdd(string s)
{

	for (int i = s.length() - 1; i >= 0; i--) {

		if (s[i] % 2 != 0) {

			string s1 = s.substr(0, i + 1);

			return s1;
		}
	}

	return "";
}

// Drivers code
int main()
{

	string s = "504";
	string ans = maxOdd(s);

	// Function Call
	cout << ans;
	return 0;
}
