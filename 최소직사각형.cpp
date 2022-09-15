//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//bool FirstCompare(pair<int, int> a, pair<int, int> b){
//    return a.first > b.first;
//}
//
//bool SecondCompare(pair<int, int> a, pair<int, int> b){
//    return a.second > b.second;
//}
//
//int solution(vector<vector<int>> sizes) {
//    int answer = 0;
//
//    vector<pair<int, int>> v1(sizes.size());
//    vector<pair<int, int>> v2(sizes.size());
//
//    for(int i=0;i<sizes.size(); i++){
//        v1[i].first = sizes[i][0];
//        v1[i].second = sizes[i][1];
//
//        v2[i].first = sizes[i][0];
//        v2[i].second = sizes[i][1];
//    }
//
//    for(int i=0;i<v1.size();i++){
//        if(v1[i].first < v1[i].second){
//            swap(v1[i].first, v1[i].second);
//        }
//    }
//
//    int maxFirst = -1;
//    int maxSecond = -1;
//
//    for(int i=0;i<v1.size();i++){
//        if(maxFirst < v1[i].first)
//            maxFirst = v1[i].first;
//
//        if(maxSecond < v1[i].second)
//            maxSecond = v1[i].second;
//    }
//
//    answer = maxFirst * maxSecond;
//
//    return answer;
//}
