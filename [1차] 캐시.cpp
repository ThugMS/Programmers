//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int cSize = 0;
//
//int FindCache(vector<string> cache, string value){
//    
//    for(int i=0;i<cache.size();i++){
//        if(cSize <= i)break;
//        
//        if(value == cache[i])
//            return i;
//    }
//    return -1;
//}
//
//int solution(int cacheSize, vector<string> cities) {
//    int answer = 0;
//    int input = 0;
//    cSize = cacheSize;
//    vector<string> cache;
//    
//    for(int i=0;i<cities.size();i++){
//        for(int j=0;j<cities[i].size();j++){
//            if(cities[i][j] >= 'A' && cities[i][j] <= 'Z'){
//                cities[i][j] += 'a' - 'A';
//            }
//        }
//    }
//    
//    for(int i=0;i<cities.size();i++){
//        int index = FindCache(cache, cities[i]);
//        if(index == -1){
//            if(!cache.empty() && input >= cacheSize){
//                cache.erase(cache.begin());
//            }
//            answer += 5;
//            input++;
//        }
//        else{
//            cache.erase(cache.begin() + index);
//            answer += 1;
//        }
//        cache.push_back(cities[i]);
//        
////        for(int j=0;j<cache.size();j++){
////            cout << cache[j] << endl;
////        }
////        cache.insert(cache.begin(), cities[i]);
//    }
//    
//    return answer;
//}
