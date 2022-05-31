//#include <string>
//#include <vector>
//
//using namespace std;
//
//int cnt;
//
//void dfs(vector<int> numbers, int target, int index, int sum){
//    if(index == numbers.size()){
//        if(sum == target)
//            cnt++;
//        return;
//    }
//
//    dfs(numbers, target, index+1, sum + numbers[index]);
//    dfs(numbers, target, index+1, sum - numbers[index]);
//}
//
//int solution(vector<int> numbers, int target) {
//    int answer = 0;
//    cnt = 0;
//    
//    dfs(numbers, target, 1, numbers[0]);
//    dfs(numbers, target, 1, -numbers[0]);
//
//    answer = cnt;
//    return answer;
//}
