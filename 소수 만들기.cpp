//#include <vector>
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int solution(vector<int> nums) {
//    int answer = 0;
//
//    bool check[3001] = { false, };
//
//    for (int i = 2; i <= sqrt(3000); i++) {
//        if (check[i] == true)
//            continue;
//
//        for (int j = i * i; j <= 3000; j += i)
//            check[j] = true;
//    }
//
//    for (int i = 0; i < nums.size() - 2; i++) {
//        for (int j = i + 1; j < nums.size() - 1; j++) {
//            for (int k = j + 1; k < nums.size(); k++) {
//                int index = nums[i] + nums[j] + nums[k];
//
//                if (check[index] == false) {
//                    answer++;
//                }
//
//            }
//        }
//    }
//
//    return answer;
//}