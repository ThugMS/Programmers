//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> cards1, vector<vector<int>> cards2) {
//    int answer = 0;
//
//    for (int k = 0; k < cards1.size(); k++) {
//        int check = 0;
//        int check2 = 0;
//        int check3 = 0;
//
//        for (int i = 0; i < 5; i++) {
//            for (int j = 0; j < 5; j++) {
//                if (cards1[k][i] == cards2[k][j]) {
//                    check = 1;
//                }
//            }
//        }
//       for (int i = 0; i < 5; i++) {
//            for (int j = 0; j < 5; j++) {
//                if (i != j && cards1[k][i] == cards1[k][j]) {
//                    check = 1;
//                }
//            }
//        }
//        for (int i = 0; i < 5; i++) {
//            for (int j = 0; j < 5; j++) {
//                if (i != j && cards2[k][i] == cards2[k][j]) {
//                    check = 1;
//                }
//            }
//        }
//
//        if (k != 0) {
//            for (int i = 0; i < 5; i++) {
//                for (int j = 0; j < 5; j++) {
//                    if (cards1[k - 1][i] == cards1[k][j]) {
//                        check2++;
//                        if (k == 3)
//                            printf("%d\n", cards1[k-1][i]);
//                        break;
//                    }
//                }
//            }
//            for (int i = 0; i < 5; i++) {
//                for (int j = 0; j < 5; j++) {
//                    if (cards2[k - 1][i] == cards2[k][j]) {
//                        check3++;
//                        break;
//                    }
//                }
//            }
//        }
//        
//        if (check == 1 || check2 >= 2 || check3>=2) {
//            answer++;
//            printf("%d %d %d\n", check, check2, check3);
//        }
//    }
//
//    return answer;
//}
//
//int main() {
//
//    vector<vector<int>> cards1 = { {13, 21, 24, 29, 50},{1, 12, 20, 21, 32},{16, 26, 34, 46, 52},{9, 11, 16, 16, 21},{3, 8, 10, 16, 20} };
//    vector<vector<int>> cards2 = { {5, 10, 15, 41, 49},{6, 14, 15, 19, 46},{5, 42, 43, 51, 52},{5, 6, 11, 13, 45},{5, 9, 11, 13, 45} };
//
//    printf("%d\n", solution(cards1, cards2));
//
//    return 0;
//}