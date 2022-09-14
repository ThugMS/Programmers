//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//bool IsSmall(char _c){
//    return _c >= 'a' && _c <= 'z';
//}
//
//bool IsBig(char _c){
//    return _c >= 'A' && _c <= 'Z';
//}
//
//string solution(string s) {
//    string answer = "";
//    int cnt = 0;
//    for(int i=0;i<s.length();i++){
//        
//
//        if(cnt % 2 == 0){
//            if(IsSmall(s[i]))
//                s[i] = s[i] - ('a' - 'A');
//        }
//        else{
//            if(IsBig(s[i]))
//                s[i] = s[i] + ('a' - 'A');
//        }
//        
//        if(s[i] == ' ')
//            cnt = 0;
//        else
//            cnt++;
//    }
//    
//    return s;
//}
//
//int main(){
//    cout << solution("ssssssss") << endl;
//}
