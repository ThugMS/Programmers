//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool Calculate(int _start, int _value){
//    int sum = 0;
//    
//    while(sum < _value){
//        sum += _start;
//        
//        if(sum == _value)
//            return true;
//        
//        _start++;
//    }
//    
//    return false;
//}
//
//int solution(int n) {
//    int answer = 1;
//    
//    for(int i=1;i<=n/2;i++){
//        if(Calculate(i, n))
//            answer++;
//    }
//    
//    return answer;
//}
//
