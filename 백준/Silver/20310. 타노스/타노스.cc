#include <iostream>

using namespace std;


int main() {

	string str;

	cin >> str;

	int len = str.length();

	int odd = len / 2;
	int even = len / 2;

	odd /= 2;

	even /= 2;

	string answer;

	int cnt = 0;

	//cout << len << endl;

	for (int i = 1; i <= len / 2; i++) {
		if (cnt < even)
			answer += "0";
		else
			answer += "1";
		
		cnt++;
	}

	cout << answer << endl;

	return 0;
}