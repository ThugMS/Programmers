//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<vector<string>> clothes) {
//    int answer = 1;
//    
//    unordered_map<string, int> map_;
//    
//    for(int i=0;i<clothes.size();i++){
//        map_[clothes[i][1]]++;
//    }
//
//    for(auto it = map_.begin(); it != map_.end(); it++){
//        answer *= it->second + 1;
//    }
//    
//    return answer - 1;
//}
