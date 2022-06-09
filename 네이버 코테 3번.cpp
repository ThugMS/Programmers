////
////  네이버 코테 3번.cpp
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
//int maxABC(int A, int B, int C, int num){
//    
//    if(num == 1){
//        if(B == 0 && C == 0)
//            return num;
//        if(B>C)
//            return 2;
//        else
//            return 3;
//    }
//    if(num == 2){
//        if(A == 0 && C == 0)
//            return num;
//        if(A>C)
//            return 1;
//        else
//            return 3;
//    }
//    if(num == 3){
//        if(A == 0 && B == 0)
//            return num;
//        if(A>B)
//            return 1;
//        else
//            return 2;
//    }
//    
//    return 0;
//}
//
//string solution(int A, int B, int C) {
//    string ans = "";
//    
//    int num = 1;
//    int check = 1;
//    
//    while(check == 1){
//        switch(num){
//            case 1:
//                if(!ans.empty() && ans[ans.length()-1] == 'a'){
//                    check = 0;
//                    break;
//                }
//                if(A>=2){
//                    if(A >= B && A>= C){
//                        ans += "aa";
//                        A -= 2;
//                    }
//                    else{
//                        ans += "a";
//                        A -= 1;
//                    }
//                }
//                else if(A == 1){
//                    ans += "a";
//                    A -= 1;
//                }
//                else{
//                    
//                }
//                num = maxABC(A,B,C, num);
//                break;
//            case 2:
//                if(!ans.empty() && ans[ans.length()-1] == 'b'){
//                    check = 0;
//                    break;
//                }
//                if(B>=2){
//                    if(B >= A && B>= C){
//                        ans += "bb";
//                        B -= 2;
//                    }
//                    else{
//                        ans += "b";
//                        B -= 1;
//                    }
//                }
//                else if(B == 1){
//                    ans += "b";
//                    B -= 1;
//                }
//                else{
//                    
//                }
//                num = maxABC(A,B,C, num);
//                break;
//            case 3:
//                if(!ans.empty() && ans[ans.length()-1] == 'c'){
//                    check = 0;
//                    break;
//                }
//                if(C>=2){
//                    if(C >= A && C >= B){
//                        ans += "cc";
//                        C -= 2;
//                    }
//                    else{
//                        ans += "c";
//                        C -= 1;
//                    }
//                }
//                else if(C == 1){
//                    ans += "c";
//                    C -= 1;
//                }
//                else{
//                    
//                }
//                num = maxABC(A,B,C, num);
//                break;
//        }
//    }
//    return ans;
//}
//
//
//int main(){
//    cout << solution(100,10,10) << endl;
//    
//    
//}
