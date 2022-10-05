//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int n, long long left, long long right) {
//    vector<int> answer;
//    
//    long long a = left / n + 1;
//    long long b = left % n + 1;
//    long long arrSize = right - left + 1;
//    
//    for(int i=0;i<arrSize;i++){
//        long long max = a > b ? a : b;
//        answer.push_back(max);
//        b++;
//        if(b > n){
//            b = 1;
//            a++;
//        }
//    }
//    
//    return answer;
//}
//
