//#include <string>
//#include <vector>
//#include <sstream>
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//unordered_map <string, vector<pair<int, int>>> valueBox;
//unordered_map <pair<int, int>, vector<pair<int, int>>> mergeBox;
//
//struct cell {
//    int r;
//    int c;
//    string value = "";
//
//    bool isMerge = false;
//    int mergeR;
//    int mergeC;
//};
//
//cell chart[55][55];
//
//
//vector<string> Split(string str) {
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
//pair<int, int> SelectCell(int r, int c) {
//    pair<int, int> p;
//
//    p.first = chart[r][c].mergeR;
//    p.second = chart[r][c].mergeC;
//
//
//    return p;
//}
//
//void UpdateValue(int r, int c, string value) {
//    if (chart[r][c].isMerge) {
//        pair<int, int> p = SelectCell(r, c);
//        r = p.first;
//        c = p.second;
//    }
//
//    chart[r][c].value = value;
//
//    valueBox[value].push_back({ r,c });
//}
//
//void UpdateValue(string value1, string value2) {
//    for (int i = 0; i < valueBox[value1].size(); i++) {
//        chart[valueBox[value1][i].first][valueBox[value1][i].second].value = value2;
//    }
//
//    valueBox[value2] = valueBox[value1];
//
//    valueBox[value1].clear();
//}
//
//bool isNullValue(int r, int c) {
//    if (chart[r][c].value == "")return true;
//
//    else
//        return false;
//}
//
//void MergeValue(int r1, int c1, int r2, int c2) {
//    if (isNullValue(r1, c1)) {
//        if (chart[r1][c1].isMerge) {
//            pair<int, int> p = SelectCell(r1, c1);
//            r1 = p.first;
//            c1 = p.second;
//        }
//
//        if (chart[r2][c2].isMerge) {
//            pair<int, int> p = SelectCell(r2, c2);
//            r2 = p.first;
//            c2 = p.second;
//        }
//
//        chart[r2][c2].isMerge = true;
//        chart[r1][c1].isMerge = true;
//
//        chart[r1][c1].mergeR = r2;
//        chart[r1][c1].mergeC = c2;
//        chart[r2][c2].mergeR = r2;
//        chart[r2][c2].mergeC = c2;
//
//        pair<int, int>p = { r2,c2 };
//        
//        mergeBox[p].push_back({ r1,c1 });
//        mergeBox[p].push_back({ r2,c2 });
//    }
//    else {
//        chart[r1][c1].isMerge = true;
//        chart[r2][c2].isMerge = true;
//
//        chart[r2][c2].mergeR = r1;
//        chart[r2][c2].mergeC = c1;
//        chart[r1][c1].mergeR = r1;
//        chart[r1][c1].mergeC = c1;
//
//        pair<int, int>p = { r1,c1 };
//
//        mergeBox[p].push_back({ r1,c1 });
//        mergeBox[p].push_back({ r2,c2 });
//    }
//
//
//
//}
//
//vector<string> solution(vector<string> commands) {
//    vector<string> answer;
//
//
//    for (int i = 0; i < commands.size(); i++) {
//        vector<string> cm = Split(commands[i]);
//
//        if (cm[0] == "UPDATE") {
//            if (cm.size() == 4) {
//                UpdateValue(stoi(cm[1]), stoi(cm[2]), cm[3]);
//            }
//            else {
//                UpdateValue(cm[1], cm[2]);
//            }
//        }
//        else if (cm[0] == "MERGE") {
//
//        }
//        else if (cm[0] == "UNMERGE") {
//
//        }
//        else if (cm[0] == "PRINT") {
//
//        }
//    }
//
//    return answer;
//}
