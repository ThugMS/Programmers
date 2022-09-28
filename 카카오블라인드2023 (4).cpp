//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//map<char, int> m_terms;
//
//vector<int> SplitDay(string str, char c) {
//    istringstream iss(str);
//    string buffer;
//
//    vector<int> result;
//
//    while (getline(iss, buffer, c)) {
//        result.push_back(stoi(buffer));
//    }
//
//    return result;
//}
//
//void SplitTerm(string str) {
//    istringstream iss(str);
//    string buffer;
//
//    char _name;
//    
//    _name = str[0];
//    int cnt = 0;
//    string _month;
//
//    while (getline(iss, buffer, ' ')) {
//        cnt++;
//        if (cnt != 0) {
//            _month = buffer;
//        }
//    }
//
//    m_terms[_name] = stoi(_month);
//}
//
//vector<string> SplitSpace(string str) {
//    istringstream iss(str);
//    string buffer;
//
//    vector<string> result;
//
//    while (getline(iss, buffer, ' ')) {
//        result.push_back(buffer);
//    }
//
//    return result;
//}
//
//void Print(vector<int> v) {
//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i];
//        cout << '.';
//    }
//    cout << endl;
//}
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
//    vector<int> answer;
//
//    vector<int> m_today = SplitDay(today, '.');
//    Print(m_today);
//
//
//    for (int i = 0; i < terms.size(); i++) {
//        SplitTerm(terms[i]);
//    }
//
//    for (int i = 0; i < privacies.size(); i++) {
//        vector<string> divide = SplitSpace(privacies[i]);
//        vector<int> _now = SplitDay(divide[0], '.');
//        int month = m_terms[divide[1][0]];
//       
//        _now[1] += month;
//
//        if (_now[1] > 12) {
//            _now[0] += _now[1] / 12;
//            _now[1] = _now[1] % 12;
//        }
//
//        _now[2]--;
//
//        if (_now[2] < 1) {
//            _now[2] = 28;
//            _now[1]--;
//
//            if (_now[1] < 1) {
//                _now[0]--;
//                _now[1] = 12;
//            }
//        }
//
//        for (int j = 0; j < m_today.size(); j++) {
//            if (m_today[j] > _now[j]) {
//                answer.push_back(i + 1);
//                break;
//            }
//   
//        }
//        Print(_now);
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}
//
//int main() {
//    solution(
//        "2020.01.01", { "Z 100", "D 5" }, { "2019.01.01 D", "2019.11.15 Z", "2019.08.02 D", "2019.07.01 D", "2018.12.28 Z" });
//}