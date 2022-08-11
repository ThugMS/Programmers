#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

pair<int, int> start;
pair<int, int> end_;
int max_x;
int max_y;
char use[100];
int min_;
int size_;
vector<string> sub;
bool visit[101][101];

void bfs(int i, int j, int cnt, int arr) {
    if (i < 0 || i >= max_x || j < 0 || j >= max_y) {
        return;
    }
    if (visit[i][j] == true)
        return;

    int k = 0;
    for (k = 0; k < size_; k++) {
        if (use[k] == sub[i][j]) {
            break;
        }
    }
    if (cnt >= 20)
        return;
    if (k >= size_)
        return;
    /* if (use.find(sub[i][j]) != string::npos) {
         return;
     }*/

    cnt = cnt + 1;
    visit[i][j] = true;


    if (i == end_.first && j == end_.second) {
        if (min_ > cnt)
            min_ = cnt;
        return;
    }
    if (arr != 1) {
        bfs(i, j - 1, cnt, 4);
        visit[i][j - 1] = false;
    }
    if (arr != 2) {
        bfs(i + 1, j, cnt, 3);
        visit[i + 1][j] = false;
    }
    if (arr != 3) {
        bfs(i - 1, j, cnt, 2);
        visit[i - 1][j] = false;
    }
    if (arr != 4) {
        bfs(i, j + 1, cnt, 1);
        visit[i][j + 1] = false;
    }
    
}

void solve() {

    bfs(start.first, start.second, 0, 0);

}

vector<int> solution(vector<string> maze, vector<string> queries) {
    vector<int> answer;
    sub = maze;

    for (int i = 0; i < queries.size(); i++) {

        string s = queries[i];
        stringstream ss(s);
        ss.str(s);

        string words[5];
        for (int j = 0; j < 5; j++) {
            ss >> words[j];
        }
        start.first = stoi(words[0]) - 1;
        start.second = stoi(words[1]) - 1;
        end_.first = stoi(words[2]) - 1;
        end_.second = stoi(words[3]) - 1;
        size_ = words[4].length();

        for (int k = 0; k < size_; k++) {
            use[k] = words[4][k];
        }

        max_y = maze[0].length();

        max_x = maze.size();
        min_ = 10000000;

        for (int k = 0; k < max_x; k++) {
            for (int j = 0; j < max_y; j++) {
                visit[k][j] = false;
            }
        }

        solve();

        if (min_ == 10000000) {
            answer.push_back(-1);
        }
        else {
            answer.push_back(min_);
        }



    }

    return answer;
}

int main() {

    vector<string> maze{ {"AAAAA"},{ "AABBB"},{"CAEFG"},{"AAEFF"} };
    vector<string> queries = { "2 1 4 5 FAE" };

    solution(maze, queries);

    return 0;
}