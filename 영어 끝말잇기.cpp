//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//vector<int> solution(int n, vector<string> words) {
//    map<string, bool> useWords;
//    vector<int> answer;
//    
//    int cnt = 2;
//    
//    useWords[words[0]] = true;
//    
//    for(int i=1;i<words.size();i++){
//        
//        if(useWords[words[i]]){
//            break;
//        }
//        if(words[i-1].back() != words[i].front()){
//            break;
//        }
//        
//        useWords[words[i]] = true;
//        cnt++;
//    }
//    
//    cout << cnt << endl;
//    
//    if(cnt == words.size() + 1){
//        answer.push_back(0);
//        answer.push_back(0);
//    }
//    else{
//        int a = cnt % n;
//        
//        
//        int b = (cnt / n)  + 1;
//        if(a==0){
//            a = n;
//            b--;
//        }
//        answer.push_back(a);
//        answer.push_back(b);
//    }
//    
//    return answer;
//}
