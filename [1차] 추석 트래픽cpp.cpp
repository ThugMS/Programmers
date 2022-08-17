//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<string> lines) {
//    int answer = 0;
//
//    vector<int> start, end;
//
//    for (int i = 0; i < lines.size(); i++) {
//        string sh, sm, ss, sms;
//        int h, m, s, ms, moment;
//
//        sh = lines[i].substr(11, 2);
//        sm = lines[i].substr(14, 2);
//        ss = lines[i].substr(17, 2);
//        sms = lines[i].substr(20, 3);
//        moment = stof(lines[i].substr(24, 5)) * 1000;
//
//        h = stoi(sh) * 3600 * 1000;
//        m = stoi(sm) * 60 * 1000;
//        s = stoi(ss) * 1000;
//        ms = stoi(sms);
//
//        start.push_back(h + m + s + ms - moment + 1);
//        end.push_back(h + m + s + ms);
//    }
//
//    for (int i = 0; i < lines.size(); i++) {
//        int end_t = end[i] + 1000;
//        int cnt = 0;
//
//        for (int j = i; j < lines.size(); j++) {
//            if (start[j] < end_t)
//                cnt++;
//        }
//
//        answer = answer > cnt ? answer : cnt;
//    }
//
//    return answer;
//}