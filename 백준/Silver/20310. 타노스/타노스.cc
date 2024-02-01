#include <iostream>

using namespace std;

// 25 점 서브태스크1
//int main() {
//
//	string str;
//
//	cin >> str;
//
//	int len = str.length();
//
//	int odd = len / 2;
//	int even = len / 2;
//
//	odd /= 2;
//
//	even /= 2;
//
//	string answer;
//
//	int cnt = 0;
//
//	//cout << len << endl;
//
//	for (int i = 1; i <= len / 2; i++) {
//		if (cnt < even)
//			answer += "0";
//		else
//			answer += "1";
//		
//		cnt++;
//	}
//
//	cout << answer << endl;
//
//	return 0;
//}

int main() {

	string str;

	cin >> str;

	long long len = str.length();
	long long odd = 0;
	long long even = 0;

	for (long long  i = 0; i < str.length(); i++) {
		if (str[i] == '1') {
			odd++;
		}
		else {
			even++;
		}
	}
	
	odd /= 2;
	even /= 2;

	long long cntOdd = 0;
	long long cntEven = 0;

	for (long long i = 0; i < str.length(); i++) {
		if (cntOdd == odd)
			break;

		if (str[i] == '1') {
			str.erase(str.begin() + i);
			cntOdd++;
			i--;
		}
	}

	for (long long i = str.length() - 1; i >= 0; i--) {
		if (cntEven == even)
			break;

		if (str[i] == '0') {
			str.erase(str.begin() + i);
			cntEven++;
			i++;
		}
	}

	cout << str << endl;

	return 0;
}