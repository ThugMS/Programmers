//#include <string>
//#include <vector>
//#include <cmath>
//#include <iostream>
//
//using namespace std;
//
//int makingThird(int n) {
//    string s = "";
//    int ans = 0;
//
//    while (n != 0) {
//        if (n % 3 == 0)
//            s += '0';
//        else if (n % 3 == 1) {
//            s += '1';
//        }
//        else {
//            s += '2';
//        }
//        n /= 3;
//    }
//    cout << s << endl;
//
//    for (int i = 0; i < s.size() / 2; i++) {
//        char sub = s[i];
//        s[i] = s[s.size() - 1 - i];
//        s[s.size() - 1 - i] = sub;
//    }    cout << s << endl;
//    
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == '0') {
//            continue;
//        }
//        else if (s[i] == '1') {
//            int num = pow(3, i);
//
//            ans += num;
//        }
//        else {
//            int num = pow(3, i);
//            ans += num * 2;
//        }
//    }
//
//    return ans;
//}
//
//int solution(int n) {
//    int answer = 0;
//
//    answer = makingThird(n);
//
//    return answer;
//}
//
//int main() {
//    printf("%d", solution(45));
//}