//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//    vector<int> answer;
//    vector<int> sub;
//
//    for(int i=0;i<commands.size();i++){
//        sub = array;
//
//        sort(sub.begin()+commands[i][0]-1, sub.begin()+commands[i][1]);
////        for(auto i : sub)
////            cout << i << " ";
//        answer.push_back(sub[commands[i][2] - 1 + commands[i][0]-1]);
//    }
//
//
//    return answer;
//}
//
//int main(){
//
//    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
//    vector<vector<int>> commands ={{2, 5, 3}};
//
//    vector<int> ans = solution(array, commands);
//
//    printf("%d\n", ans[0]);
//
//    return 0;
//}
