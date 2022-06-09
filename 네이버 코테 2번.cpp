////
////  네이버 코테 2번.cpp
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
//int solution(string &S, vector<int> &C) {
//    int ans = 0;
//    
//    for(int i=0;i<S.length() - 1;i++){
//        if(S[i] == '-')
//            continue;
//        
//        int index = i+1;
//        while(true){
//            if(S[index] != '-')
//                break;
//            index++;
//        }
//        if(S[i] == S[index]){
//            if(C[i] < C[index]){
//                S[i] = '-';
//                ans += C[i];
//            }
//            else{
//                S[index] = '-';
//                ans += C[index];
//                i--;
//            }
//        }
//    }
//    
//        
//    return ans;
//}
