#include <string>
#include <vector>
#include <queue>

using namespace std;

int dirY[4] = { -1, 1, 0, 0 };
int dirX[4] = { 0, 0,  -1, 1 };

bool leverVisit[101][101] = { false, };
bool visit[101][101] = { false, };

int leverBFS[101][101] = { 0, };
int BFS[101][101] = { 0, };

pair<int, int> start;
pair<int, int> lever;
pair<int, int> exitPos;

queue <pair<int, int>> q;

int N, M;

int solution(vector<string> maps) {
    int answer = 0;

    N = maps.size();
    M = maps[0].size();

    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[0].size(); j++) {
            if (maps[i][j] == 'S')
                start = make_pair(i, j);

            else if (maps[i][j] == 'E')
                exitPos = make_pair(i, j);

            else if (maps[i][j] == 'L')
                lever = make_pair(i, j);
        }
    }

    q.push(start);
    leverVisit[start.first][start.second] = true;
    leverBFS[start.first][start.second] = 1;

    while (q.empty() == false) {
        int curY = q.front().first;
        int curX = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = curY + dirY[i];
            int nx = curX + dirX[i];

            if (nx < 0 || nx >= M)
                continue;

            if (ny < 0 || ny >= N)
                continue;

            if (maps[ny][nx] == 'X')
                continue;

            if (leverVisit[ny][nx] == true)
                continue;

            q.push(make_pair(ny, nx));
            leverVisit[ny][nx] = true;
            leverBFS[ny][nx] = leverBFS[curY][curX] + 1;
        }
    }

    if (leverBFS[lever.first][lever.second] == 0)
        return -1;

    q.push(lever);
    visit[lever.first][lever.second] = true;
    BFS[lever.first][lever.second] = 1;

    while (q.empty() == false) {
        int curY = q.front().first;
        int curX = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = curY + dirY[i];
            int nx = curX + dirX[i];

            if (nx < 0 || nx >= M)
                continue;

            if (ny < 0 || ny >= N)
                continue;

            if (maps[ny][nx] == 'X')
                continue;

            if (visit[ny][nx] == true)
                continue;

            q.push(make_pair(ny, nx));
            visit[ny][nx] = true;
            BFS[ny][nx] = BFS[curY][curX] + 1;
        }
    }

    if (BFS[exitPos.first][exitPos.second] == 0)
        return -1;

    answer = leverBFS[lever.first][lever.second] + BFS[exitPos.first][exitPos.second] - 2;

    return answer;
}