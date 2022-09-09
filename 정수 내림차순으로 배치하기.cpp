//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long MakeNum(int _num, int _cnt, long long _answer){
//
//    for(int i=0;i<_cnt;i++){
//        _answer *= 10;
//        _answer += _num;
//    }
//
//    return _answer;
//}
//
//long long solution(long long n) {
//    long long answer = 0;
//    int cntNum[10] = {0,};
//
//    while(n != 0){
//        cntNum[n % 10]++;
//        n /= 10;
//    }
//    
//    for(int i=9;i>=0;i--){
//        answer = MakeNum(i, cntNum[i], answer);
//    }
//
//    return answer;
//}
