////
////  네이버 코테 4번.cpp
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
//    
//    int tag = 1;
//    int index = 0;
//    for(int i=0;i<A.size();i++){
//        if(index == 0){
//            if(A[i] > 0){
//                tag = 1;
//            }
//            else if(A[i] == 0){
//                tag = 0;
//            }
//            else{
//                tag = -1;
//            }
//            index++;
//            continue;
//        }
//        
//        if(tag == 1){
//            if(A[i] > 0){
//                ans = ans<index ? index : ans;
//                index = 0;
//                i--;
//                continue;
//            }
//            else{
//                tag = -1;
//                index++;
//            }
//        }
//        else if(tag == 0){
//            if(A[i] > 0){
//                tag = 1;
//                index++;
//                continue;
//            }
//            else if(A[i] == 0){
//                tag = 0;
//                index++;
//                continue;
//            }
//            else{
//                tag = -1;
//                index++;
//                continue;
//            }
//        }
//        else{
//            if(A[i] < 0){
//                ans = ans<index ? index : ans;
//                index = 0;
//                i--;
//                continue;
//            }
//            else{
//                tag = 1;
//                index++;
//            }
//        }
//    }
//    ans = ans<index ? index : ans;
//    
//    return ans;
//}
