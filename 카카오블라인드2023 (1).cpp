//#include <string>
//#include <vector>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int value = 0;
//int cntValue = 0;
//
//
//int Divde(long long _num) {
//    int cnt = 0;
//    while ((long long)pow(2, pow(2,cnt) - 1) - 1 < _num) {
//        cnt++;
//    }
//
//    return pow(2, cnt) - 1;
//}
//
//string DivdeBinary(long long _num) {
//    string st = "";
//
//    while (_num != 0) {
//        if (_num % 2 == 0) {
//            st += "0";
//        }
//        else {
//            st += "1";
//            value++;
//        }
//        
//        _num /= 2;
//
//    }
//
//    reverse(st.begin(), st.end());
//    return st;
//}
//
//void Count(string st, int start, int end, bool checking[]) {
//    if (abs(start - end) <= 1) {
//        if (checking[start] == false && st[start] == '1') {
//            checking[start] = true;
//            cntValue++;
//        }
//            
//
//        if (checking[end] == false && st[end] == '1') {
//            checking[end] = true;
//            cntValue++;
//        }
//            
//        return;
//    }
//
//    if (st[(start + end) / 2] == '0')
//        return;
//
//    checking[(start + end) / 2] = true;
//    cntValue++;
//
//    Count(st, start, (start + end) / 2 - 1, checking);
//    Count(st, (start + end) / 2 + 1, end, checking);
//}
//
//vector<int> solution(vector<long long> numbers) {
//    vector<int> answer;
//
//    for (int i = 0; i < numbers.size(); i++) {
//        
//        int sum = Divde(numbers[i]);
//        string s = DivdeBinary(numbers[i]);
//        bool checking[1000] = { false, };
//
//        //cout << sum << " " << s.size() << endl;
//        //cout << s << endl;
//
//        for (int j = s.size(); j < sum; j++) {
//            s = "0" + s;
//        }
//
//        Count(s, 0, s.size() - 1, checking);
//
//        if (cntValue == value)
//            answer.push_back(1);
//        else
//            answer.push_back(0);
//
//        //cout << cntValue << " " << value << endl;
//
//        value = 0;
//        cntValue = 0;
//    }
//
//    return answer;
//}
//
//
//
