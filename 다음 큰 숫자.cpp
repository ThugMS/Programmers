//#include <string>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//string ConvertBinary(int _value){
//    string s = "";
//    
//    while(_value != 0){
//        if(_value % 2 == 0)
//            s += "0";
//        else
//            s += "1";
//        
//        _value /= 2;
//    }
//    
//    reverse(s.begin(), s.end());
//    
//    return s;
//}
//
//int ConvertDic(string _s){
//    int value = 0;
//    
//    reverse(_s.begin(), _s.end());
//    
//    for(int i=0;i<_s.length();i++){
//        if(_s[i] == '1'){
//            value += pow(2, i);
//        }
//    }
//    
//    return value;
//}
//
//int solution(int n) {
//    int answer = 0;
//    
//    string s = ConvertBinary(n);
//    
//    int cnt = 0;
//    
//    for(int i = s.size() - 1;i > 0; i--){
//        if(s[i] == '1' && s[i-1] == '0'){
//            s[i-1] = '1';
//            
//            for(int j= s.size() - 1; j>=i; j--){
//                if(cnt > 0){
//                    s[j] = '1';
//                    cnt--;
//                }
//                else
//                    s[j] = '0';
//            }
//            break;
//        }
//        
//        if(s[i] == '1')cnt++;
//        
//        if(i == 1){
//            s += "1";
//            s[0] = '1';
//            s[1] = '0';
//        }
//    }
//    
//    answer = ConvertDic(s);
//    
//    return answer;
//}
