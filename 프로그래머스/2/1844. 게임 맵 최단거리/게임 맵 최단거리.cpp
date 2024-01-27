#include<vector>
#include <iostream>
#include <queue>

using namespace std;

int dirY[4] = { -1, 1, 0, 0 };
int dirX[4] = { 0, 0, -1, 1 };

bool visit[101][101] = { false, };
int bfs[101][101] = { 0, };

int answer = 0;
int N, M;

queue<pair<int, int>> q;

//void solve(vector<vector<int> > _maps, int _x, int _y, int value) {
//    if (_x < 0 || _x >= N)
//        return;
//
//    if (_y < 0 || _y >= M)
//        return;
//
//    if (visit[_y][_x] == true)
//        return;
//
//    if (_maps[_y][_x] == 0)
//        return;
//
//    value++;
//
//    if (_y == M - 1 && _x == N - 1) {
//        answer = min(answer, value);
//        return;
//    }
//
//    visit[_y][_x] = true;
//
//    for (int i = 0; i < 4; i++) {
//        solve(_maps, _x + dirX[i], _y + dirY[i], value);
//    }
//    
//    visit[_y][_x] = false;
//}

int solution(vector<vector<int> > maps)
{
    M = maps.size();
    N = maps[0].size();

    q.push(make_pair(0, 0));
    visit[0][0] = true;
    bfs[0][0] = 1;

    while (q.empty() == false) {
        int curX = q.front().second;
        int curY = q.front().first;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = curX + dirX[i];
            int ny = curY + dirY[i];

            if (nx < 0 || nx >= N)
                continue;

            if (ny < 0 || ny >= M)
                continue;

            if (visit[ny][nx] == true)
                continue;

            if (maps[ny][nx] == 0)
                continue;

            visit[ny][nx] = true;
            q.push(make_pair(ny, nx));
            bfs[ny][nx] = bfs[curY][curX] + 1;
        }
    }

    if (bfs[M - 1][N - 1] == 0)
        return -1;
    else
        return bfs[M - 1][N - 1];
}