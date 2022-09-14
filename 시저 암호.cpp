//#include <string>
//#include <vector>
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
//string solution(string s, int n) {
//    string answer = "";
//    
//    for(int i=0;i<s.length();i++){
//        if(s[i] == ' ')
//            continue;
//        
//        int index = 0;
//        
//        if(IsSmall(s[i])){
//            index = s[i] - 'a';
//        }
//        else{
//            index = s[i] - 'A';
//        }
//        
//        index += n;
//        index = index % 26;
//        
//        if(IsSmall(s[i])){
//            s[i] = 'a' + index;
//        }
//        else{
//            s[i] = 'A' + index;
//        }
//    }
//    
//    return s;
//}
