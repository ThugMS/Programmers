#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int L, C;
vector<char> arr;
vector<char> key;

bool CheckAnswer() {
	int cnt = 0;

	for (int i = 0; i < L; i++) {
		if (key[i] == 'a' ||
			key[i] == 'e' ||
			key[i] == 'i' ||
			key[i] == 'o' ||
			key[i] == 'u')
			cnt++;
	}

	if (cnt >= 1 && L - cnt >= 2)
		return true;

	return false;
}

void DFS(int _index) {
	if ((int)key.size() == L) {
		if (CheckAnswer() == true) {
			for (int i = 0; i < L; i++) {
				cout << key[i];
			}
			cout << '\n';
		}
		return;
	}

	for (int i = _index; i < C; i++) {
		key.push_back(arr[i]);
		DFS(i + 1);
		key.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> L >> C;

	char s;
	for (int i = 0; i < C; i++) {
		cin >> s;
		arr.push_back(s);
	}

	sort(arr.begin(), arr.end());

	/*for (int i = 0; i < C; i++) {
		cout << arr[i] << "!!" << endl;
	}*/

	DFS(0);

	return 0;
}