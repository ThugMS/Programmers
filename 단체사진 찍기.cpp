//#include <string>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//bool checking(char opt, int diff, int dis){
//    if(opt == '='){
//        if(diff==dis)
//            return true;
//        else
//            return false;
//    }
//    else if(opt == '>'){
//        if(diff > dis)
//            return true;
//        else
//            return false;
//    }
//    else{
//        if(diff < dis)
//            return true;
//        else
//            return false;
//    }
//}
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//int solution(int n, vector<string> data) {
//    int answer = 0;
//
//    
//    string line = "ACFJMNRT";
//    sort(line.begin(), line.end());
//
//
//    do{
//        int check = 0;
//        for(string a : data){
//            int first = line.find(a[0]);
//            int second = line.find(a[2]);
//            int diff = abs(first - second)-1;
//            int dis = a[4] - '0';
//
//            if(checking(a[3], diff, dis)){
//                continue;
//            }
//            check = 1;
//            break;
//        }
//        if(check == 0)
//            answer++;
//    }
//    while(next_permutation(line.begin(), line.end()));
//
//    return answer;
//}
