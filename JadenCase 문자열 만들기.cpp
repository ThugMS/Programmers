//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//bool IsSmallLetter(char _c){
//    if(_c >= 'a' && _c <= 'z')
//        return true;
//    else
//        return false;
//}
//
//bool IsBigLetter(char _c){
//    if(_c >= 'A' && _c <= 'Z')
//        return true;
//    else
//        return false;
//}
//
//string solution(string s) {
//    for(int i=0;i<s.size();i++){
//        if(i == 0 && IsSmallLetter(s[i]))
//           s[i]  = s[i] - ('a' - 'A');
//        
//        else if(s[i-1] == ' ' && IsSmallLetter(s[i]))
//            s[i] = s[i] - ('a' - 'A');
//        
//        else if(i != 0 && s[i-1] != ' ' && IsBigLetter(s[i]))
//            s[i] = s[i] + ('a' - 'A');
//    }
//    
//    return s;
//}
//
//int main(){
//    cout << solution("K") << endl;
//}
