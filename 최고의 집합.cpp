//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(int n, int s) {
//    vector<int> answer;
//    
//    int divide = s/n;
//    int remain = s % n;
//    
//    if(n > s){
//        answer.push_back(-1);
//        return answer;
//    }
//    
//    for(int i=0;i<n;i++){
//        if(i >= n - remain)
//            answer.push_back(divide + 1);
//        else
//            answer.push_back(divide);
//    }
// 
//    return answer;
//}
//
//int main(){
//    vector<int> ans = solution(10,97);
//    
//    for(int i=0;i<ans.size();i++){
//        cout<<ans[i]<< " " ;
//    }
//}
//
