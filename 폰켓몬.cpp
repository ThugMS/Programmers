//#include <vector>
//using namespace std;
//
//int solution(vector<int> nums)
//{
//    int answer = 0;
//    bool check[200001] = { false, };
//    int cnt = 0;
//    int N = nums.size();
//    for (int i = 0; i < N; i++) {
//        if (check[nums[i]] == false) {
//            answer++;
//            check[nums[i]] = true;
//        }
//    }
//
//    if (answer > N / 2)
//        answer = N / 2;
//    
//    return answer;
//}