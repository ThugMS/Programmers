//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(int n) {
//    int answer = 0;
//    
//    bool ss[1000001] = {false,};
//    
//    for(int i=2;i<=n/2;i++){
//        if(ss[i])
//            continue;
//        
//        for(int j=2;j<=n;j++){
//            if(i*j > n)
//                break;
//            
//            if(ss[i*j])
//                continue;
//            
//            ss[i*j] = true;
//            //cout << i*j << endl;
//        }
//    }
//    
//    for(int i=2;i<=n;i++){
//        if(!ss[i]){
//            answer += 1;
//            //cout << i << endl;
//        }
//            
//        
//    }
//    
//    return answer;
//}
