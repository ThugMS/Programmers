//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//
//int min_ = 1000000;
//int n, m;
//
//int dy[4] = { -1,1,0,0 };
//int dx[4] = { 0,0,-1,1 };
//
//void solve(string road, int k) {
//    int move = k;
//    int cnt = 0;
//    for (int i = 0; i < road.length(); i++) {
//        move = k;
//        if (i + move >= road.length()-1)
//            break;
//
//        while (move > 0) {
//            if (road[i + move] == '.') {
//                i = i + move - 1;
//                cnt++;
//                break;
//            }
//            move--;
//        }
//        if (move <= 0)
//            return;
//    }
//    min_ = min(min_, cnt);
//}
//
//void dfs(vector<string>grid, int k, int i, int j, string road, bool visit[51][51]) {
//    if (i > n || i<0 || j>m || j < 0) {
//        return;
//    }
// 
//    if (grid[i][j] == '#') {
//        return;
//    }
//    
//    if (visit[i][j] == true) {
//        return;
//    }
//
//    visit[i][j] = true;
//    road += grid[i][j];
//    if (i == n && j == m) {
//
//        solve(road, k);
//        return;
//    }
//
//    for (int q = 0; q < 4; q++) {
//        dfs(grid, k, i + dy[q], j + dx[q], road, visit);
//    }
//}
//
//int solution(vector<string> grid, int k) {
//    int answer = -1;
//    
//    n = grid.size() - 1;
//    m = grid[0].size() - 1;
//
//    string road = "";
//    bool visit[51][51] = { false, };
//
//    dfs(grid, k, 0, 0, road, visit);
//
//    answer = min_;
//
//    return answer;
//}
//
//int main() {
//
//    int k = 4;
//    vector<string> grid = {"..FF", "###F", "###."};
//
//    cout << solution(grid, k) << endl;
//}
