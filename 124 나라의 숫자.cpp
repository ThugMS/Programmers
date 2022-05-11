//#include <string>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//string solution(int n) {
//    int sub = n;
//    int a = 0;
//    string answer = "";
//
//    while (sub != 0) {
//        a = sub % 3;
//        sub /= 3;
//
//        if (a == 0) {
//            sub--;
//            answer = "4" + answer;
//        }
//        else if (a == 1) {
//            answer = "1" + answer;
//        }
//        else
//            answer = "2" + answer;
//    }
//
//    
//    return answer;
//}