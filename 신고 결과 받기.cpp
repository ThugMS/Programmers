//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <set>
//#include <sstream>
//
//using namespace std;
//
//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//    vector<int> answer(id_list.size(), 0);
//
//    unordered_map<string, int> index_id;
//
//    for (int i = 0; i < id_list.size(); i++)
//        index_id[id_list[i]] = i;
//
//    unordered_map<string, set<string>> report_who;
//    stringstream ss;
//
//    for (auto it : report) {
//        ss.str(it);
//        string a, b;
//        ss >> a >> b;
//
//        report_who[b].insert(a);
//
//        ss.clear();
//    }
//
//    for (auto it : report_who) {
//        if (it.second.size() >= k) {
//            for (auto set_it : it.second) {
//                answer[index_id[set_it]]++;
//            }
//        }
//    }
//
//    return answer;
//}