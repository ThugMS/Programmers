#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int arr[501] = { 0, };
int H, W;

stack<pair<int, int>> st;


int main() {
	
	cin >> H >> W;

	for (int j = 0; j < W; j++) {
		cin >> arr[j];
	}

	int prev = arr[0];
	int answer = 0;

	for (int i = 1; i < W; i++) {
		int h = arr[i];

		if (arr[i] < prev){
			st.push(make_pair(arr[i - 1], i - 1));
		}
		else if (arr[i] > prev && st.empty() == false) {
			/*cout << "index : " << i << "   value : " << arr[i] << endl;*/
			while (st.empty() == false) {
				pair<int, int> info = st.top();

				if (arr[i] == info.first) {
					int len = i - info.second - 1;
					int sub = arr[i] - prev;

					answer += len * sub;

					st.pop();
					break;
				}
				else if (arr[i] < info.first) {
					int len = i - info.second - 1;
					int sub = arr[i] - prev;
					//cout << "index : " << i << endl;
					answer += len * sub;
					break;
				}
				else {

					int len = i - info.second - 1;
					int sub = info.first - prev;

					answer += len * sub;
					prev = info.first;
					st.pop();
				}
			}
		
		}

		prev = arr[i];
	}

	cout << answer << endl;

	return 0;
}