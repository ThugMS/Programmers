//#include <string>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(int n, vector<string> plans, vector<string> clients) {
//    vector<int> answer;
//
//    vector<int> data;
//    vector<bool> service(n+1, false);
//    vector<vector<int>> add_service;
//    vector<vector<bool>> show_service;
//
//    for (int i = 0; i < plans.size(); i++) {
//        string sub;
//        string sv;
//        
//        stringstream s2(plans[i]);
//        s2 >> sub;
//        data.push_back(stoi(sub));
//        vector<int> add;
//
//        while (s2 >> sv) {
//            if (service[stoi(sv)] == false) {
//                service[stoi(sv)] = true;
//                add.push_back(stoi(sv));
//            }
//        }
//        add_service.push_back(add);
//        vector<bool> show = { service.begin(), service.end() };
//        show_service.push_back(show);
//    }
//
//    vector<int> c_data;
//    vector<vector<int>> c_service;
//
//    for (int i = 0; i < clients.size(); i++) {
//        string sub;
//        string sv;
//
//        stringstream s2(clients[i]);
//        s2 >> sub;
//        c_data.push_back(stoi(sub));
//        vector<int> add;
//
//        while (s2 >> sv) {
//             add.push_back(stoi(sv));
//        }
//        c_service.push_back(add);
//    }
//
//    for (int i = 0; i < clients.size(); i++) {
//        int index = lower_bound(data.begin(), data.end(), c_data[i]) - data.begin();
// 
//        if (index >= plans.size()) {
//            answer.push_back(0);
//            continue;
//        }
//        vector<int> need_service;
//        for (int j = 0; j < c_service[i].size(); j++) {
//            if (show_service[index][c_service[i][j]] == false) {
//                need_service.push_back(c_service[i][j]);
//            }
//        }
//
//        for (int j = index; j < plans.size(); j++) {
//         
//            if (add_service[j].empty())
//                continue;
//
//            for (int k = 0; k < add_service[j].size(); k++) {
//                auto it = find(need_service.begin(), need_service.end(), add_service[j][k]);
//                if (it != need_service.end()) {
//                    need_service.erase(it);
//                }
//            }
//
//            if (need_service.empty()) {
//                answer.push_back(j + 1);
//                break;
//            }
//            else if (j == plans.size() - 1) {
//                answer.push_back(0);
//            }
//           
//        } for (int i = 0; i < answer.size(); i++) {
//                cout << answer[i];
//            }
//    }
//
//    //for (int i = 0; i < answer.size(); i++) {
//    //    cout << answer[i];
//    //}
//
//    return answer;
//}
//
//int main() {
//
//    int n = 5;
//    vector<string> plans = { "38 2 3", "394 1 4" };
//    vector<string> clients = { "10 2 3", "300 1 2 3 4", "500 1" };
//
//    solution(n, plans, clients);
//}