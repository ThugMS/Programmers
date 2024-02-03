#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int N, M, K;

vector<pair<string, int>> odd;
vector<pair<string, int>> even;

int isOdd[50] = { false, };

bool CheckOdd(string s) {
	int odd = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') {
			odd++;
		}
	}

	if (odd % 2 == 1)
		return true;
	else
		return false;
}

int CheckZero(string s) {
	int odd = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') {
			odd++;
		}
	}

	return odd;
}

bool cmp(pair<string, int> a, pair<string, int> b) {

	return a.second > b.second;
}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		if (CheckOdd(s)) {
			int index = 0;
			
			for (index = 0; index < odd.size(); index++) {
				if (odd[index].first == s) {
					odd[index].second++;
					break;
				}
			}
			/*cout << "index : " << index << " " << "odd.size : " << odd.size() << endl;*/
			if (index == odd.size()) {
				odd.push_back(make_pair(s, 1));
			}
		}
		else {
			int index = 0;

			for (index = 0; index < even.size(); index++) {
				if (even[index].first == s) {
					even[index].second++;
					break;
				}
			}

			if (index == even.size()) {
				even.push_back(make_pair(s, 1));
			}
		}
	}

	cin >> K;
	int answer = 0;

	if (K % 2 == 1) {
		sort(odd.begin(), odd.end(), cmp);

	/*	for (int i = 0; i < odd.size(); i++) {
			cout << odd[i].first << " " << odd[i].second << endl;
		}*/


		for (auto iter : odd) {
			int cnt = CheckZero(iter.first);

			if (cnt <= K) {
				answer = iter.second;
				break;
			}
		}
	}
	else {
		sort(even.begin(), even.end(), cmp);

		for (auto iter : even) {
			int cnt = CheckZero(iter.first);

			if (cnt <= K) {
				answer = iter.second;
				break;
			}
		}
	}

	cout << answer << endl;

	return 0;
}