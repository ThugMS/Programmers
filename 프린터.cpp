////#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<int> priorities, int location) {
//    int answer = 0;
//    
//    int remain[10] = {0, };
//    
//    queue<pair<int,int>> q;
//    
//    for(int i=0;i<priorities.size();i++){
//        pair<int,int> sub;
//        
//        sub.first = priorities[i];
//        sub.second = i;
//        remain[sub.first]++;
//        
//        q.push(sub);
//    }
//    
//    int cnt = 0;
//    
//    while(1){
//        pair<int,int> sub;
//        
//        if(q.empty())
//            break;
//        
//        sub = q.front();
//        
//        int check = 0;
//        for(int i=sub.first + 1; i<=9;i++){
//            if(remain[i] > 0){
//                check = 1;
//                q.pop();
//                q.push(sub);
//                break;
//            }
//        }
//        
//        if(check)
//            continue;
//        
//        remain[sub.first]--;
//        cnt++;
//        q.pop();
//        if(sub.second == location)
//            return cnt;
//    }
//    
//    
//    
//    return answer;
//}
