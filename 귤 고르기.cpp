//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//unordered_map<int, int> numberCnt;
//
//bool check[10000001] = {false, };
//vector<int> number;
//
//vector<int> v;
//
//int solution(int k, vector<int> tangerine) {
//    int answer = 0;
//    
//    for(int i=0;i<tangerine.size();i++){
//        if(check[tangerine[i]] == false){
//            check[tangerine[i]]  = true;
//            numberCnt[tangerine[i]] = 1;
//            
//            number.push_back(tangerine[i]);
//        }
//        else{
//            numberCnt[tangerine[i]]++;
//        }
//    }
//    
//    for(int i=0;i<number.size();i++){
//        int cnt = numberCnt[number[i]];
//        
//        v.push_back(cnt);
//    }
//    
//    sort(v.begin(),v.end(), greater<int>());
//    
//    int num = 0;
//    
//    for(int i=0;i<v.size();i++){
//        if(num >= k)
//            break;
//        
//        num += v[i];
//        answer++;
//    }
//    
//    return answer;
//}
