//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> numbers) {
//    vector<int> answer;
//
//    bool cmp[1000] = { false, };
//
//    sort(numbers.begin(), numbers.end());
//
//    for (int i = 0; i < numbers.size() - 1; i++) {
//        for (int j = i + 1; j < numbers.size(); j++) {
//            int sum = numbers[i] + numbers[j];
//            if (!cmp[sum]) {
//                answer.push_back(sum);
//                cmp[sum] = true;
//            }
//        }
//    }
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}