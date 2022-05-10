//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int gcd(int& w, int& h) {
//    int sub;
//    while (h != 0) {
//        sub = w % h;
//        w = h;
//        h = sub;
//    }
//    return w;
//}
//
//long long solution(int w, int h) {
//
//    long long answer = (long long)w * (long long)h - (w + h);
//    answer += gcd(w, h);
//
//    return answer;
//}