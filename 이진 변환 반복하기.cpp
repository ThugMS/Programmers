//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int zeroCnt = 0;
//int converCnt = 0;
//
//int CountOne(string _s){
//    int cnt = 0;
//    cout << _s << endl;
//    
//    for(int i=0;i<_s.size();i++){
//        if(_s[i] == '1')
//            cnt++;
//        else
//            zeroCnt++;
//    }
//    
//    return cnt;
//}
//
//string ConvertBinary(int _num){
//    string s = "";
//    
//    while(_num != 0){
//        if(_num % 2 == 0)
//            s += "0";
//        else
//            s += "1";
//        _num /= 2;
//    }
//    
//    reverse(s.begin(), s.end());
//    converCnt++;
//    
//    return s;
//}
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    
//    while(s != "1"){
//        int size = CountOne(s);
//        s = ConvertBinary(size);
//    }
//    
//    answer.push_back(converCnt);
//    answer.push_back(zeroCnt);
//    
//    
//    return answer;
//}
//
//
