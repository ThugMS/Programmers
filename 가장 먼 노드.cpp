//#include <string>
//#include <vector>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//
//int solution(int n, vector<vector<int>> edge) {
//    int answer = 0;
//
//    vector<set<int>> graph(n+1);
//    vector<int> dis(n+1, 0);
//    queue<int> q;
//    int max = 0;
//
//    for(int i=0;i<edge.size();i++){
//        int start = edge[i][0];
//        int end = edge[i][1];
//
//        graph[start].insert(end);
//        graph[end].insert(start);
//    }
//
//    dis[1] = 1;
//    q.push(1);
//
//    while(!q.empty()){
//        int now = q.front();
//        q.pop();
//
//        for(auto it : graph[now]){
//            if(dis[it] == 0){
//                dis[it] = dis[now] + 1;
//                max = max < dis[it] ? dis[it] : max;
//                q.push(it);
//            }
//        }
//    }
//
//    for(int i=1;i<dis.size();i++){
//        if(max == dis[i]){
//            answer++;
//        }
//    }
//    return answer;
//}
