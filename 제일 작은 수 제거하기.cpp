//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> arr) {
//    vector<int> answer;
//    
//    if(arr.size() == 1){
//        answer.push_back(-1);
//        return answer;
//    }
//    
//    int min = arr[0];
//    int minIndex = 0;
//    
//    for(int i=1;i<arr.size();i++){
//        if(arr[i] < min){
//            min = arr[i];
//            minIndex = i;
//        }
//    }
//    
//    arr.erase(arr.begin() + minIndex);
//    
//    return arr;
//}
