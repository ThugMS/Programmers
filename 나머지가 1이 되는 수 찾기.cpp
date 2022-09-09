//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//pair <bool,int> isDecimal[1000001];
//
//int maxValue = 0;
//
//void CheckDecimal(int n){
//    for(int i = n * 2; i <= maxValue; i += n){
//        if(isDecimal[i].first == true)
//            continue;
//        
//        isDecimal[i].first = true;
//        isDecimal[i].second = n;
//    }
//}
//
//int solution(int n) {
//    int answer = 0;
//    
//    maxValue = n;
//    
//    for(int i = 2; i < n; i++){
//        if(!isDecimal[i].first)
//            CheckDecimal(i);
//    }
//    
//    answer = isDecimal[n-1].first == true ? isDecimal[n-1].second : n-1;
//    
//    return answer;
//}
//
//int main(){
//    
//    cout << solution(7) << endl;
//}
