//#include <string>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//int solution(string s) {
//    string answer = "";
//    string sub = "";
//
//    map<string, string> num;
//    num["zero"] = "0";
//    num["one"] = "1";
//    num["two"] = "2";
//    num["three"] = "3";
//    num["four"] = "4";
//    num["five"] = "5";
//    num["six"] = "6";
//    num["seven"] = "7";
//    num["eight"] = "8";
//    num["nine"] = "9";
//
//    for(int i=0;i<s.size();i++){
//        if(s[i] >= '0' && s[i] <= '9'){
//            answer += s[i];
//        }
//        else{
//            sub += s[i];
//            if(num[sub] != ""){
//                answer += num[sub];
//                sub = "";
//            }
//        }
//    }
//
//    return stoi(answer);
//}
