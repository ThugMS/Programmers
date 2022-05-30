//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> balance, vector<vector<int>> transaction, vector<int> abnormal) {
//    vector<int> answer;
//
//
//    vector<vector<pair<int, int>>> user(101,vector<pair<int,int>>(0));
//    
//    for (int i = 1; i <= balance.size(); i++) {
//        user[i].push_back({ i,balance[i-1] });
//    }
//    
//    for (int i = 0; i < transaction.size(); i++) {
//        int from = transaction[i][0];
//        int to = transaction[i][1];
//        int won = transaction[i][2];
//
//        while (won > 0) {
//            if (won > user[from][user[from].size() - 1].second) {
//                won -= user[from][user[from].size() - 1].second;
//                user[to].push_back({ user[from][user[from].size() - 1].first, user[from][user[from].size() - 1].second });
//                user[from].erase(user[from].end() - 1);
//            }
//            else {
//                user[from][user[from].size() - 1].second -= won;
//                user[to].push_back({ user[from][user[from].size() - 1].first, won });
//                won = 0;
//
//                if (user[from][user[from].size() - 1].second == 0) {
//                    user[from].erase(user[from].end() - 1);
//                }
//            }
//        }
//    }
//    
//   
//    for (int i = 0; i < abnormal.size(); i++) {
//        for (int j = 1; j <= balance.size(); j++) {
//            for (int k = 0; k < user[j].size(); k++) {
//                if (user[j][k].first == abnormal[i]) {
//                    user[j][k].second = 0;
//                }
//            }
//        }
//    }
//
//
//    for (int j = 1; j <= balance.size(); j++) {
//        int sub = 0;
//        for (int k = 0; k < user[j].size(); k++) {
//            sub += user[j][k].second;
//        }
//        answer.push_back(sub);
//    }
//   
//    return answer;
//}
//
//int main() {
//    vector<int> balance = { 30,30,30,30 };
//    vector<vector<int>> transaction = { {1,2,10},{2,3,20},{3,4,5},{3,4,30} };
//    vector<int> abnormal = { 1 };
//
//    solution(balance, transaction, abnormal);
//}