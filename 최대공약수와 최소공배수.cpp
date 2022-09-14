//#include <string>
//#include <vector>
//
//using namespace std;
//
//int MaxFactor(int a, int b){
//
//    for(int i=a;i>=1;i--){
//        if(a % i == 0  && b % i == 0)
//            return i;
//    }
//
//    return 0;
//}
//
//int MinMultiple(int a, int b, int _max){
//    return a * b / _max;
//}
//
//vector<int> solution(int n, int m) {
//    vector<int> answer;
//
//    if(n > m)
//        swap(n,m);
//
//    int maxFactor = MaxFactor(n, m);
//    int minMultiple = MinMultiple(n, m, maxFactor);
//
//    answer.push_back(maxFactor);
//    answer.push_back(minMultiple);
//
//    return answer;
//}
