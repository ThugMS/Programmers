#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    vector<pair<int, int>> user;

    user.push_back({ 0, 0 });

    for (int i = 1; i <= n; i++) {
        user.push_back({ i, 1 });
    }


    for (int i = 0; i < reserve.size(); i++) {
        user[reserve[i]].second = 2;
    }

    for (int i = 0; i < lost.size(); i++) {
        user[lost[i]].second--;
    }


    for (int i = 1; i <= n; i++) {
        if (user[i].second == 0) {
            if (user[i - 1].second == 2) {
                user[i - 1].second = 1;
                user[i].second = 1;
            }
            else if (user[i + 1].second == 2) {
                user[i + 1].second = 1;
                user[i].second = 1;
            }
        }
        if (user[i].second == 1 || user[i].second == 2)
            answer++;
    }

    return answer;
}