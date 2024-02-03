#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool CheckEven(string &s, int index) {
	int cnt = 0;
	
	while (s[index] == 'X') {
		cnt++;
		index++;
	}

	if (cnt % 2 == 1)
		return true;

	return false;
}

bool CheckA(string &s, int index) {
	int cnt = 0;

	for (int i = index; i < s.size(); i++) {
		if (s[i] == 'X')
			cnt++;
		else {
			return false;
		}

		if (cnt == 4)
			break;
	}

	if (cnt == 4) {
		s[index] = 'A';
		s[index + 1] = 'A';
		s[index + 2] = 'A';
		s[index + 3] = 'A';

		return true;
	}

	return false;
}

bool CheckB(string &s, int index) {
	int cnt = 0;

	for (int i = index; i < s.size(); i++) {
		if (s[i] == 'X')
			cnt++;
		else {
			return false;
		}

		if (cnt == 2)
			break;
	}

	if (cnt == 2) {
		s[index] = 'B';
		s[index + 1] = 'B';

		return true;
	}

	return false;
}

int main() {

	string s;

	cin >> s;

	int index = 0;

	while (index < s.size()) {

		if (s[index] != 'X') {
			index++;
			continue;
		}
			

		if (CheckEven(s, index)) {

			/*cout << "index :"  << index << endl;
			cout << s << endl;*/
			cout << -1 << endl;;
			return 0;
		}
		
		if (CheckA(s, index)) {
			index += 4;
			continue;
		}

		if (CheckB(s, index)) {
			index += 2;
				continue;
		}
	}

	cout << s << endl;

	return 0;
}