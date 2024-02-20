#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int N, D;
vector<vector <int>> arr;
int answer = INT_MAX;

bool cmp(vector <int> a, vector <int> b) {
	return a[0] < b[0];
}

void solution(int pos, int dis, int index) {
	if (pos > D)
		return;

	if (pos == D) {
		answer = min(answer, dis);
		
		return;
	}
		
	if (index >= N) {
		dis += D - pos;
		//cout << index << "answer " << dis << endl;
		answer = min(answer, dis);
		return;
	}

	
	if (arr[index][0] >= pos) {
		dis += arr[index][0] - pos;
		//cout << index << " " << dis << endl;
		solution(arr[index][0], dis, index + 1);
		
		solution(arr[index][1], dis + arr[index][2], index + 1);
	}
	else {
		solution(pos, dis, index + 1);
	}

}



int main() {

	cin >> N >> D;

	for (int i = 0; i < N; i++) {
		vector<int> v(3);
		//cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		cin >> v[0] >> v[1] >> v[2];
		arr.push_back(v);
	}

	sort(arr.begin(), arr.end(), cmp);

	solution(0, 0, 0);

	if (answer == INT_MAX)
		answer = D;

	cout << answer << endl;

	return 0;

}