//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(string s) {
//    vector<int> answer;
//
//    vector<int> v[1000000];
//
//    int check = 0;
//    int cnt = 0;
//    int max = -1;
//
//    int makeInt = 0;
//    vector<int> sub;
//    bool visit[1001000] = { false, };
//
//    for (int i = 1; i < s.length() - 1; i++) {
//
//        if (s[i] == ',' && check) {
//            sub.push_back(makeInt);
//            makeInt = 0;
//            continue;
//        }
//            
//
//        if (s[i] == '{') {
//            check = 1;
//            continue;
//        }
//
//        if (s[i] == '}') {
//            sub.push_back(makeInt);
//            makeInt = 0;
//
//            v[cnt] = sub;
//            sub.clear();
//            max = max < cnt ? cnt : max;
//            cnt = 0;
//            check = 0;
//            continue;
//        }
//
//
//        if (check) {
//            cnt++;
//            makeInt *=10;
//            makeInt += s[i] - '0'; 
//        }
//    }
//
//
//    for (int i = 1; i <= max; i++) {
//        
//        for (int j = 0; j < v[i].size(); j++) {
//            if (!visit[v[i][j]]) {
//                visit[v[i][j]] = true;
//                answer.push_back(v[i][j]);
//                break;
//            }
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    solution("{{2},{2,1},{2,1,3},{2,1,3,4}}");
//}