//#include <string>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//int NNN(int N, int index) {
//    int sub = N;
//
//    for (int i = 1; i <= index; i++) {
//        sub = sub * 10 + N;
//    }
//    return sub;
//}
//
//int solution(int N, int number) {
//    if (N == number)
//        return 1;
//
//    int answer = 0;
//    vector<unordered_set<int>> dp(8);
//    dp[0].insert(N);
//
//    for (int k = 1; k < 8; k++) {
//        for (int i = 0; i < k; i++) {
//            for (int j = 0; j < k; j++) {
//                if (i + j + 1 != k) continue;
//
//                for (int a : dp[i]) {
//                    for (int b : dp[j]) {
//                        dp[k].insert(a + b);
//                        if (a - b > 0)
//                            dp[k].insert(a - b);
//                        dp[k].insert(a * b);
//                        if(a / b >0)
//                            dp[k].insert(a / b);
//                    }
//                }
//            }
//        }
//        dp[k].insert(NNN(N,k));
//
//        if (dp[k].count(number))
//            return k + 1;
//    }
//
//    return -1;
//}