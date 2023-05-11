//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> parent(101);
//
//bool cmp(vector<int> a, vector<int> b){
//    return a[2] < b[2];
//}
//
//int FindParent(int _node){
//    if(parent[_node] == _node) return _node;
//    
//    return parent[_node] = FindParent(parent[_node]);
//}
//
//int solution(int n, vector<vector<int>> costs) {
//    int answer = 0;
//    
//    for(int i=0;i<parent.size();i++){
//        parent[i] = i;
//    }
//    
//    sort(costs.begin(), costs.end(), cmp);
//    
//    for(int i=0;i<costs.size();i++){
//        int start = FindParent(costs[i][0]);
//        int end = FindParent(costs[i][1]);
//        int cost = costs[i][2];
//        
//        if(start != end){
//            answer += cost;
//            parent[end] = start;
//        }
//    }
//    
//    return answer;
//}
//
