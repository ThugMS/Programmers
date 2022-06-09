////
////  네이버 코테 1번.cpp
////  Programmers
////
////  Created by 이민석 on 2022/06/09.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> &A) {
//    int ans = 0;
//    vector<pair<int, int>> v(100001);
//    
//    
//    for(int i=0;i<A.size();i++){
//        v[A[i]].second = 1;
//        if(A[i] == 1 || v[A[i] - 1].first == 1){
//            v[A[i]].first = 1;
//            int index = A[i];
//            while(v[index].second == 1){
//                v[index].first = 1;
//                index++;
//                if(index >= A.size())
//                    break;
//            }
//            ans++;
//        }
//    }
//    
//    return ans;
//}
