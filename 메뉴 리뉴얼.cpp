//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//map<string, int> m;
//
//bool cmp(pair<string, int> a, pair<string, int> b) {
//    return a.second > b.second;
//}
//
//void combination(string order, int size, string node, int index) {
//    if (node.length() == size) {
//        if (m.find(node) != m.end()) {
//            m[node]++;
//        }
//        else {
//            m[node] = 1;
//        }
//        return;
//    }
//
//    for (int i = index; i < order.length(); i++) {
//        combination(order, size, node + order[i], i + 1);
//    }
//}
//
//vector<string> solution(vector<string> orders, vector<int> course) {
//    vector<string> answer;
//
//    for (int i = 0; i < course.size(); i++) {
//        m.clear();
//
//        for (int j = 0; j < orders.size(); j++) {
//            sort(orders[j].begin(), orders[j].end());
//
//            if (course[i] <= orders[j].length()) {
//                combination(orders[j], course[i], "", 0);
//            }
//        }
//
//        vector<pair<string, int>> v(m.begin(), m.end());
//
//        sort(v.begin(), v.end(), cmp);
//
//        if (!v.empty()) {
//            int max_ = v.front().second;
//
//            if (max_ >= 2) {
//                for (int i = 0; i < v.size(); i++) {
//                    if (v[i].second >= max_) {
//                        answer.push_back(v[i].first);
//                    }
//                    else
//                        break;
//                }
//            }
//        }
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}