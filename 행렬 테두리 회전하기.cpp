#include <string>
#include <vector>

using namespace std;

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;

    int arr[101][101];
    int cnt = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            arr[i][j] = cnt;
            cnt++;
        }
    }

    for (int i = 0; i < queries.size(); i++) {
        int y1 = queries[i][0];
        int x1 = queries[i][1];
        int y2 = queries[i][2];
        int x2 = queries[i][3];

        int sub = arr[y1][x1];
        int min_ = sub;
        int num = 1;
        int y = y1 + 1;
        int x = x1;
        while (num <= 4) {
            switch (num) {
            case 1:
                arr[y - 1][x] = arr[y][x];
                min_ = min(arr[y][x], min_);
                if (y == y2) {
                    num = 2;
                    x++;
                }
                else {
                    y++;
                }
                break;
            case 2:
                arr[y][x - 1] = arr[y][x];
                min_ = min(arr[y][x], min_);
                if (x == x2) {
                    num = 3;
                    y--;
                }
                else {
                    x++;
                }
                break;
            case 3:
                arr[y + 1][x] = arr[y][x];
                min_ = min(arr[y][x], min_);
                if (y == y1) {
                    num = 4;
                    x--;
                }
                else {
                    y--;
                }
                break;

            case 4:
                arr[y][x + 1] = arr[y][x];
                min_ = min(arr[y][x], min_);
                if (x == x1) {
                    arr[y][x + 1] = sub;
                    num = 5;
                }
                else {
                    x--;
                }
                break;
            }
        }
        answer.push_back(min_);
    }

    return answer;
}