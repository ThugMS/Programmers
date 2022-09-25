//#include <string>
//#include <vector>
//#include <cmath>
//#include <iostream>
//
//using namespace std;
//
////d l r u
//
//string answer = "";
//int curX = 0;
//int curY = 0;
//
//int MinCheck(int x, int y, int r, int c) {
//    int sum = 0;
//
//    sum += abs(x - r);
//    sum += abs(y - c);
//
//    return sum;
//}
//
//void MoveMin(int n, int m) {
//    if (curY < n) {
//        answer += "d";
//        curY++;
//        return;
//    }
//
//    if (curX > 1) {
//        answer += "l";
//        curX--;
//        return;
//    }
//
//    if (curX < m) {
//        answer += "r";
//        curX++;
//        return;
//    }
//
//    if (curY > 1) {
//        answer += "u";
//        curY--;
//        return;
//    }
//    
//}
//
//string solution(int n, int m, int y, int x, int r, int c, int k) {
//    
//    int minWay = MinCheck(x, y, r, c);
//    if (k < minWay || (k - minWay) % 2 == 1)
//        return "impossible";
//    
//
//    int cnt = 0;
//
//    curX = x;
//    curY = y;
//    
//
//    while (cnt < k) {
//        
//        if (minWay + cnt < k) {
//            MoveMin(n, m);
//            cnt++;
//            //cout << cnt << endl;
//            minWay = MinCheck(curY, curX, r, c);
//        }
//        else{
//            if (curY < r) {
//                while (curY != r) {
//                    answer += "d";
//                    curY++;
//                }
//            }
//            if (curX > c) {
//                while (curX != c) {
//                    answer += "l";
//                    curX--;
//                }
//            }
//            if (curX < c) {
//                while (curX != c) {
//                    answer += "r";
//                    curX++;
//                }
//            }
//            if (curY > r ) {
//                while (curY != r) {
//                    answer += "u";
//                    curY--;
//                }
//            }
//            break;
//        }
//    }
//
//    return answer;
//}
//
