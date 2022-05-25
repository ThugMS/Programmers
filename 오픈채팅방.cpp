//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//#include <sstream>
//
//using namespace std;
//
//vector<string> solution(vector<string> record) {
//    vector<string> answer;
//    unordered_map<string, string> user;
//
//    for (int i = 0; i < record.size(); i++) {
//
//        istringstream ss(record[i]);
//        string word;
//        vector <string> words;
//
//
//        while (getline(ss, word, ' ')) {
//            words.push_back(word);
//        }
//
//        string type = words[0];
//        string id = words[1];
//        if (type != "Leave") {
//            string nick = words[2];
//            user[id] = nick;
//        }
//       
//    }
//
//    for (int i = 0; i < record.size(); i++) {
//        istringstream ss(record[i]);
//        string word;
//        vector <string> words;
//
//        while (getline(ss, word, ' ')) {
//            words.push_back(word);
//        }
//
//        string type = words[0];
//        string id = words[1];
//
//        string sub = "";
//
//        if (type != "Change") {
//            sub += user[id];
//            if (type == "Enter") {
//                sub += "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.";
//            }
//            else {
//                sub += "´ÔÀÌ ³ª°¬½À´Ï´Ù.";
//            }
//            answer.push_back(sub);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<string> record = { "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" };
//
//    vector<string>  answer = solution(record);
//
//    for (auto it : answer) {
//        cout << it << endl;
//    }
//
//    return 0;
//}