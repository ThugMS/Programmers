//#include <string>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//string solution(vector<int> numbers, string hand) {
//    string answer = "";
//    int arr[4][3];
//    pair<int, int> left = { 3,0 };
//    pair<int, int> right = { 3,2 };
//    
//    int cnt = 1;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            arr[i][j] = cnt;
//            cnt++;
//        }
//    }
//    arr[3][0] = -1;
//    arr[3][1] = 0;
//    arr[3][2] = -1;
//
//    for (int i = 0; i < numbers.size(); i++) {
//        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
//            if (numbers[i] == 1) {
//                left = { 0,0 };
//            }
//            else if (numbers[i] == 4) {
//                left = { 1,0 };
//            }
//            else {
//                left = { 2,0 };
//            }
//            answer += "L";
//        }
//        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
//            if (numbers[i] == 3) {
//                right = { 0,2 };
//            }
//            else if (numbers[i] == 6) {
//                right = { 1,2 };
//            }
//            else {
//                right = { 2,2 };
//            }
//            answer += "R";
//        }
//        else {
//            if (numbers[i] == 2) {
//                double dist1 = abs(left.first - 0) + abs(left.second - 1);
//                double dist2 = abs(right.first - 0) + abs(right.second - 1);
//
//                if (dist1 > dist2) {
//                    right = { 0,1 };
//                    answer += "R";
//                }
//                else if (dist1 < dist2) {
//                    left = { 0,1 };
//                    answer += "L";
//                }
//                else {
//                    if (hand == "right") {
//                        right = { 0,1 };
//                        answer += "R";
//                    }
//                    else {
//                        left = { 0,1 };
//                        answer += "L";
//                    }
//                }
//            }
//            else if (numbers[i] == 5) {
//                double dist1 = abs(left.first - 1) + abs(left.second - 1);
//                double dist2 = abs(right.first - 1) + abs(right.second - 1);
//
//                if (dist1 > dist2) {
//                    right = { 1,1 };
//                    answer += "R";
//                }
//                else if (dist1 < dist2) {
//                    left = { 1,1 };
//                    answer += "L";
//                }
//                else {
//                    if (hand == "right") {
//                        right = { 1,1 };
//                        answer += "R";
//                    }
//                    else {
//                        left = { 1,1 };
//                        answer += "L";
//                    }
//                }
//            }
//            else if (numbers[i] == 8){
//                double dist1 = abs(left.first - 2) + abs(left.second - 1);
//                double dist2 = abs(right.first - 2) + abs(right.second - 1);
//
//                if (dist1 > dist2) {
//                    right = { 2,1 };
//                    answer += "R";
//                }
//                else if (dist1 < dist2) {
//                    left = { 2,1 };
//                    answer += "L";
//                }
//                else {
//                    if (hand == "right") {
//                        right = { 2,1 };
//                        answer += "R";
//                    }
//                    else {
//                        left = { 2,1 };
//                        answer += "L";
//                    }
//                }
//            }
//            else {
//                double dist1 = abs(left.first - 3) + abs(left.second - 1);
//                double dist2 = abs(right.first - 3) + abs(right.second - 1);
//
//                if (dist1 > dist2) {
//                    right = { 3,1 };
//                    answer += "R";
//                }
//                else if (dist1 < dist2) {
//                    left = { 3,1 };
//                    answer += "L";
//                }
//                else {
//                    if (hand == "right") {
//                        right = { 3,1 };
//                        answer += "R";
//                    }
//                    else {
//                        left = { 3,1 };
//                        answer += "L";
//                    }
//                }
//            }
//        }
//    }
//
//    return answer;
//}