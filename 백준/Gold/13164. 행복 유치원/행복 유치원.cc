#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int N, K;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}

int main() {

	cin >> N >> K;

	vector<int> v(N, 0);
	vector<pair<int, int>> sub(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < N - 1; i++) {
		sub[i].first = i + 1;
		sub[i].second = v[i + 1] - v[i];
	}

	sort(sub.begin(), sub.end(), cmp);

	//for (int i = 0; i < N - 1; i++) {
	//	cout << sub[i].first << " " << sub[i].second << endl;
	//}

	int answer = 0;
	vector<int> part(K - 1);

	for (int i = 0; i < K - 1; i++) {
		part[i] = sub[i].first;
	}
	sort(part.begin(), part.end());

	//for (int i = 0; i < K - 1; i++) {
	//	cout << part[i] << endl;
	//}

	int start = 0;
	
	for (int i = 0; i < K - 1; i++) {
		int a = v[start];
		int b = v[part[i]- 1] ;

		answer += b - a;

		start = part[i];
	}

	answer += v[N - 1] - v[start];

	cout << answer << endl;

	return 0;
}