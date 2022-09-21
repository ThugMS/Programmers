//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int brown, int yellow) {
//    vector<int> answer;
//    
//    int sum = brown + yellow;
//    
//    for(int i=3;i<sum/2; i++){
//        if(sum % i == 0){
//            int x = i * 2  - 2;
//            int y = (sum/i) * 2 - 2;
//            
//            if(x + y == brown){
//                answer.push_back(sum/i);
//                answer.push_back(i);
//                break;
//            }
//        }
//    }
//    
//    return answer;
//}
