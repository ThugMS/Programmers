#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> tree[100001];
bool visited[100001];
int dp[100001][2];

void dfs(int node) {
    visited[node] = true;
    dp[node][0] = 0; // node를 켜지 않는 경우
    dp[node][1] = 1; // node를 켜는 경우
    
    for (int child : tree[node]) {
        if (!visited[child]) {
            dfs(child);
            dp[node][0] += dp[child][1]; // 자식이 켜져야 함
            dp[node][1] += min(dp[child][0], dp[child][1]); // 자식이 켜지든 안 켜지든 최소값 선택
        }
    }
}

int solution(int n, vector<vector<int>> lighthouse) {
    for (auto& edge : lighthouse) {
        int u = edge[0], v = edge[1];
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    // 루트로 아무 노드나 선택 (1번 노드부터 탐색 시작)
    dfs(1);
    
    // 루트 노드가 켜지지 않는 경우와 켜지는 경우 중 최소값을 반환
    return min(dp[1][0], dp[1][1]);
}

